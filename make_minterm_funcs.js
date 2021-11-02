/**
 * MIT License
 * 
 * Copyright (c) 2021 Alexey Epsilon <epsiloncool@gmail.com>
 * 
 * to run this file, please use
 * 
 * node make_minterm_sum.js
 */

let fs = require('fs');

/**
 * This function returns optimized representation of MinTerm sum (reduced set of minterms) in the 
 * form of "01_" where 0 means inverted parameter, 1 means non-inverted parameter and "_" no parameter used
 * 
 * For example, minterm 0xCA is converted to [0_1, 11_] that means ((~a) & c) | (a & b)
 * 
 * @param {byte} minterm A value from 0 to 255 that describes a minterm set
 * @returns {array} an array of triads
 */
const OptimizeTerms = (minterm) => {
	let arr = [];
	let r = '';
	for (let i = 0; i < 8; i++) {
		if (minterm & 0x01) {
			switch (i) {
				case 0:
					r = '000';
					break;
				case 1:
					r = '001';
					break;
				case 2:
					r = '010';
					break;
				case 3:
					r = '011';
					break;
				case 4:
					r = '100';
					break;
				case 5:
					r = '101';
					break;
				case 6:
					r = '110';
					break;
				case 7:
					r = '111';
					break;
			}
			arr.push(r);
		}
		minterm >>= 1;
	}

	// Let's optimize arr
	let n_step = 1;
	let is_optimizable = true;
	while (is_optimizable) {
		is_optimizable = false;

		console.log('Step ' + n_step + ':');
		console.log(arr);

		let is_break = false;
		for (let i in arr) {
			let ex = arr[i];
			for (let i2 in arr) {
				if (arr[i2] !== ex) {
					// Check if we have one-bit difference
					let n_diff_bit = -1;
					let n_differences = 0;
					for (let z = 0; z < 3; z++) {
						if (ex.substr(z, 1) === arr[i2].substr(z, 1)) {
							// No actions
						} else {
							n_differences++;
							n_diff_bit = z;
						}
					}
					if (n_differences === 1) {
						// Okay, we found the good thing!
						// Recreate the arr without ex and arr[i2] and add merged word
						let arr2 = [];
						for (let v in arr) {
							if ((arr[v] !== ex) && (arr[v] !== arr[i2])) {
								arr2.push(arr[v]);
							}
						}
						let new_el = ex.substr(0, n_diff_bit) + '_' + ex.substr(n_diff_bit + 1);
						arr2.push(new_el);

						arr = arr2;

						is_break = true;
						is_optimizable = true;
						break;
					}
				}
			}
			if (is_break) {
				break;
			}
		}

		n_step++;
	}

	return arr;
};

let class_name = 'DebugAPI';

let out = [];

for (let i = 0; i < 256; i++) {
	let opted = OptimizeTerms(i);

	let eq_list = [];
	for (let z in opted) {
		let p = opted[z];
		let eq = [];
		if (p[0] !== '_') {
			eq.push((p[0] === '0') ? '(~a)' : 'a');
		}
		if (p[1] !== '_') {
			eq.push((p[1] === '0') ? '(~b)' : 'b');
		}
		if (p[2] !== '_') {
			eq.push((p[2] === '0') ? '(~c)' : 'c');
		}
		if (eq.length > 0) {
			eq_list.push('(' + eq.join(' & ') + ')');
		} else {
			eq_list.push('1');
		}
	}
	let equation = '';
	if (eq_list.length > 0) {
		equation = eq_list.join(' | ');
	} else {
		equation = '0';
	}

	console.log('' + i + ' => p = ' + equation);

	out.push('int ' + class_name + '::MinTermSum_' + ('0' + i.toString(16)).substr(-2, 2) + '(int a, int b, int c) { return ' + equation + '; };' + "\n");
}

fs.writeFileSync(__dirname + '/build/minterm_funcs.cpp', out.join(''));

console.log('Done.');
