int MinTermSum(int a, int b, int c, byte minTerm)
{
	int p = 0;
	
	switch (minTerm) {
		case 0: p = 0; break;
		case 1: p = ((~a) & (~b) & (~c)); break;
		case 2: p = ((~a) & (~b) & c); break;
		case 3: p = ((~a) & (~b)); break;
		case 4: p = ((~a) & b & (~c)); break;
		case 5: p = ((~a) & (~c)); break;
		case 6: p = ((~a) & (~b) & c) | ((~a) & b & (~c)); break;
		case 7: p = ((~a) & b & (~c)) | ((~a) & (~b)); break;
		case 8: p = ((~a) & b & c); break;
		case 9: p = ((~a) & (~b) & (~c)) | ((~a) & b & c); break;
		case 10: p = ((~a) & c); break;
		case 11: p = ((~a) & b & c) | ((~a) & (~b)); break;
		case 12: p = ((~a) & b); break;
		case 13: p = ((~a) & b & c) | ((~a) & (~c)); break;
		case 14: p = ((~a) & b & (~c)) | ((~a) & c); break;
		case 15: p = ((~a)); break;
		case 16: p = (a & (~b) & (~c)); break;
		case 17: p = ((~b) & (~c)); break;
		case 18: p = ((~a) & (~b) & c) | (a & (~b) & (~c)); break;
		case 19: p = (a & (~b) & (~c)) | ((~a) & (~b)); break;
		case 20: p = ((~a) & b & (~c)) | (a & (~b) & (~c)); break;
		case 21: p = (a & (~b) & (~c)) | ((~a) & (~c)); break;
		case 22: p = ((~a) & (~b) & c) | ((~a) & b & (~c)) | (a & (~b) & (~c)); break;
		case 23: p = ((~a) & b & (~c)) | (a & (~b) & (~c)) | ((~a) & (~b)); break;
		case 24: p = ((~a) & b & c) | (a & (~b) & (~c)); break;
		case 25: p = ((~a) & b & c) | ((~b) & (~c)); break;
		case 26: p = (a & (~b) & (~c)) | ((~a) & c); break;
		case 27: p = ((~a) & b & c) | (a & (~b) & (~c)) | ((~a) & (~b)); break;
		case 28: p = (a & (~b) & (~c)) | ((~a) & b); break;
		case 29: p = ((~a) & b & c) | (a & (~b) & (~c)) | ((~a) & (~c)); break;
		case 30: p = ((~a) & b & (~c)) | (a & (~b) & (~c)) | ((~a) & c); break;
		case 31: p = (a & (~b) & (~c)) | ((~a)); break;
		case 32: p = (a & (~b) & c); break;
		case 33: p = ((~a) & (~b) & (~c)) | (a & (~b) & c); break;
		case 34: p = ((~b) & c); break;
		case 35: p = (a & (~b) & c) | ((~a) & (~b)); break;
		case 36: p = ((~a) & b & (~c)) | (a & (~b) & c); break;
		case 37: p = (a & (~b) & c) | ((~a) & (~c)); break;
		case 38: p = ((~a) & b & (~c)) | ((~b) & c); break;
		case 39: p = ((~a) & b & (~c)) | (a & (~b) & c) | ((~a) & (~b)); break;
		case 40: p = ((~a) & b & c) | (a & (~b) & c); break;
		case 41: p = ((~a) & (~b) & (~c)) | ((~a) & b & c) | (a & (~b) & c); break;
		case 42: p = (a & (~b) & c) | ((~a) & c); break;
		case 43: p = ((~a) & b & c) | (a & (~b) & c) | ((~a) & (~b)); break;
		case 44: p = (a & (~b) & c) | ((~a) & b); break;
		case 45: p = ((~a) & b & c) | (a & (~b) & c) | ((~a) & (~c)); break;
		case 46: p = ((~a) & b & (~c)) | (a & (~b) & c) | ((~a) & c); break;
		case 47: p = (a & (~b) & c) | ((~a)); break;
		case 48: p = (a & (~b)); break;
		case 49: p = (a & (~b) & c) | ((~b) & (~c)); break;
		case 50: p = (a & (~b) & (~c)) | ((~b) & c); break;
		case 51: p = ((~b)); break;
		case 52: p = ((~a) & b & (~c)) | (a & (~b)); break;
		case 53: p = ((~a) & (~c)) | (a & (~b)); break;
		case 54: p = ((~a) & b & (~c)) | (a & (~b) & (~c)) | ((~b) & c); break;
		case 55: p = ((~a) & b & (~c)) | ((~b)); break;
		case 56: p = ((~a) & b & c) | (a & (~b)); break;
		case 57: p = ((~a) & b & c) | (a & (~b) & c) | ((~b) & (~c)); break;
		case 58: p = ((~a) & c) | (a & (~b)); break;
		case 59: p = ((~a) & b & c) | ((~b)); break;
		case 60: p = ((~a) & b) | (a & (~b)); break;
		case 61: p = ((~a) & b & c) | ((~a) & (~c)) | (a & (~b)); break;
		case 62: p = ((~a) & b & (~c)) | ((~a) & c) | (a & (~b)); break;
		case 63: p = (a & (~b)) | ((~a)); break;
		case 64: p = (a & b & (~c)); break;
		case 65: p = ((~a) & (~b) & (~c)) | (a & b & (~c)); break;
		case 66: p = ((~a) & (~b) & c) | (a & b & (~c)); break;
		case 67: p = (a & b & (~c)) | ((~a) & (~b)); break;
		case 68: p = (b & (~c)); break;
		case 69: p = (a & b & (~c)) | ((~a) & (~c)); break;
		case 70: p = ((~a) & (~b) & c) | (b & (~c)); break;
		case 71: p = ((~a) & (~b)) | (b & (~c)); break;
		case 72: p = ((~a) & b & c) | (a & b & (~c)); break;
		case 73: p = ((~a) & (~b) & (~c)) | ((~a) & b & c) | (a & b & (~c)); break;
		case 74: p = (a & b & (~c)) | ((~a) & c); break;
		case 75: p = ((~a) & b & c) | (a & b & (~c)) | ((~a) & (~b)); break;
		case 76: p = (a & b & (~c)) | ((~a) & b); break;
		case 77: p = ((~a) & b & c) | (a & b & (~c)) | ((~a) & (~c)); break;
		case 78: p = ((~a) & c) | (b & (~c)); break;
		case 79: p = (a & b & (~c)) | ((~a)); break;
		case 80: p = (a & (~c)); break;
		case 81: p = (a & b & (~c)) | ((~b) & (~c)); break;
		case 82: p = ((~a) & (~b) & c) | (a & (~c)); break;
		case 83: p = ((~a) & (~b)) | (a & (~c)); break;
		case 84: p = (a & (~b) & (~c)) | (b & (~c)); break;
		case 85: p = ((~c)); break;
		case 86: p = ((~a) & (~b) & c) | (a & (~b) & (~c)) | (b & (~c)); break;
		case 87: p = (a & (~b) & (~c)) | ((~a) & (~b)) | (b & (~c)); break;
		case 88: p = ((~a) & b & c) | (a & (~c)); break;
		case 89: p = ((~a) & b & c) | (a & b & (~c)) | ((~b) & (~c)); break;
		case 90: p = ((~a) & c) | (a & (~c)); break;
		case 91: p = ((~a) & b & c) | ((~a) & (~b)) | (a & (~c)); break;
		case 92: p = ((~a) & b) | (a & (~c)); break;
		case 93: p = ((~a) & b & c) | ((~c)); break;
		case 94: p = (a & (~b) & (~c)) | ((~a) & c) | (b & (~c)); break;
		case 95: p = (a & (~c)) | ((~a)); break;
		case 96: p = (a & (~b) & c) | (a & b & (~c)); break;
		case 97: p = ((~a) & (~b) & (~c)) | (a & (~b) & c) | (a & b & (~c)); break;
		case 98: p = (a & b & (~c)) | ((~b) & c); break;
		case 99: p = (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~b)); break;
		case 100: p = (a & (~b) & c) | (b & (~c)); break;
		case 101: p = (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~c)); break;
		case 102: p = ((~b) & c) | (b & (~c)); break;
		case 103: p = (a & (~b) & c) | ((~a) & (~b)) | (b & (~c)); break;
		case 104: p = ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)); break;
		case 105: p = ((~a) & (~b) & (~c)) | ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)); break;
		case 106: p = (a & (~b) & c) | (a & b & (~c)) | ((~a) & c); break;
		case 107: p = ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~b)); break;
		case 108: p = (a & (~b) & c) | (a & b & (~c)) | ((~a) & b); break;
		case 109: p = ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~c)); break;
		case 110: p = (a & (~b) & c) | ((~a) & c) | (b & (~c)); break;
		case 111: p = (a & (~b) & c) | (a & b & (~c)) | ((~a)); break;
		case 112: p = (a & b & (~c)) | (a & (~b)); break;
		case 113: p = (a & (~b) & c) | (a & b & (~c)) | ((~b) & (~c)); break;
		case 114: p = ((~b) & c) | (a & (~c)); break;
		case 115: p = (a & b & (~c)) | ((~b)); break;
		case 116: p = (b & (~c)) | (a & (~b)); break;
		case 117: p = (a & b & (~c)) | ((~a) & (~c)) | (a & (~b)); break;
		case 118: p = (a & (~b) & (~c)) | ((~b) & c) | (b & (~c)); break;
		case 119: p = (b & (~c)) | ((~b)); break;
		case 120: p = ((~a) & b & c) | (a & b & (~c)) | (a & (~b)); break;
		case 121: p = ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)) | ((~b) & (~c)); break;
		case 122: p = (a & b & (~c)) | ((~a) & c) | (a & (~b)); break;
		case 123: p = ((~a) & b & c) | (a & b & (~c)) | ((~b)); break;
		case 124: p = (a & b & (~c)) | ((~a) & b) | (a & (~b)); break;
		case 125: p = ((~a) & b & c) | (a & b & (~c)) | ((~a) & (~c)) | (a & (~b)); break;
		case 126: p = ((~a) & c) | (b & (~c)) | (a & (~b)); break;
		case 127: p = (a & b & (~c)) | (a & (~b)) | ((~a)); break;
		case 128: p = (a & b & c); break;
		case 129: p = ((~a) & (~b) & (~c)) | (a & b & c); break;
		case 130: p = ((~a) & (~b) & c) | (a & b & c); break;
		case 131: p = (a & b & c) | ((~a) & (~b)); break;
		case 132: p = ((~a) & b & (~c)) | (a & b & c); break;
		case 133: p = (a & b & c) | ((~a) & (~c)); break;
		case 134: p = ((~a) & (~b) & c) | ((~a) & b & (~c)) | (a & b & c); break;
		case 135: p = ((~a) & b & (~c)) | (a & b & c) | ((~a) & (~b)); break;
		case 136: p = (b & c); break;
		case 137: p = ((~a) & (~b) & (~c)) | (b & c); break;
		case 138: p = (a & b & c) | ((~a) & c); break;
		case 139: p = ((~a) & (~b)) | (b & c); break;
		case 140: p = (a & b & c) | ((~a) & b); break;
		case 141: p = ((~a) & (~c)) | (b & c); break;
		case 142: p = ((~a) & b & (~c)) | (a & b & c) | ((~a) & c); break;
		case 143: p = (a & b & c) | ((~a)); break;
		case 144: p = (a & (~b) & (~c)) | (a & b & c); break;
		case 145: p = (a & b & c) | ((~b) & (~c)); break;
		case 146: p = ((~a) & (~b) & c) | (a & (~b) & (~c)) | (a & b & c); break;
		case 147: p = (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~b)); break;
		case 148: p = ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c); break;
		case 149: p = (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~c)); break;
		case 150: p = ((~a) & (~b) & c) | ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c); break;
		case 151: p = ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~b)); break;
		case 152: p = (a & (~b) & (~c)) | (b & c); break;
		case 153: p = ((~b) & (~c)) | (b & c); break;
		case 154: p = (a & (~b) & (~c)) | (a & b & c) | ((~a) & c); break;
		case 155: p = (a & (~b) & (~c)) | ((~a) & (~b)) | (b & c); break;
		case 156: p = (a & (~b) & (~c)) | (a & b & c) | ((~a) & b); break;
		case 157: p = (a & (~b) & (~c)) | ((~a) & (~c)) | (b & c); break;
		case 158: p = ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c) | ((~a) & c); break;
		case 159: p = (a & (~b) & (~c)) | (a & b & c) | ((~a)); break;
		case 160: p = (a & c); break;
		case 161: p = ((~a) & (~b) & (~c)) | (a & c); break;
		case 162: p = (a & b & c) | ((~b) & c); break;
		case 163: p = ((~a) & (~b)) | (a & c); break;
		case 164: p = ((~a) & b & (~c)) | (a & c); break;
		case 165: p = ((~a) & (~c)) | (a & c); break;
		case 166: p = ((~a) & b & (~c)) | (a & b & c) | ((~b) & c); break;
		case 167: p = ((~a) & b & (~c)) | ((~a) & (~b)) | (a & c); break;
		case 168: p = (a & (~b) & c) | (b & c); break;
		case 169: p = ((~a) & (~b) & (~c)) | (a & (~b) & c) | (b & c); break;
		case 170: p = (c); break;
		case 171: p = (a & (~b) & c) | ((~a) & (~b)) | (b & c); break;
		case 172: p = ((~a) & b) | (a & c); break;
		case 173: p = (a & (~b) & c) | ((~a) & (~c)) | (b & c); break;
		case 174: p = ((~a) & b & (~c)) | (c); break;
		case 175: p = (a & c) | ((~a)); break;
		case 176: p = (a & b & c) | (a & (~b)); break;
		case 177: p = ((~b) & (~c)) | (a & c); break;
		case 178: p = (a & (~b) & (~c)) | (a & b & c) | ((~b) & c); break;
		case 179: p = (a & b & c) | ((~b)); break;
		case 180: p = ((~a) & b & (~c)) | (a & b & c) | (a & (~b)); break;
		case 181: p = (a & b & c) | ((~a) & (~c)) | (a & (~b)); break;
		case 182: p = ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c) | ((~b) & c); break;
		case 183: p = ((~a) & b & (~c)) | (a & b & c) | ((~b)); break;
		case 184: p = (b & c) | (a & (~b)); break;
		case 185: p = (a & (~b) & c) | ((~b) & (~c)) | (b & c); break;
		case 186: p = (a & b & c) | ((~a) & c) | (a & (~b)); break;
		case 187: p = (b & c) | ((~b)); break;
		case 188: p = (a & b & c) | ((~a) & b) | (a & (~b)); break;
		case 189: p = ((~a) & (~c)) | (b & c) | (a & (~b)); break;
		case 190: p = ((~a) & b & (~c)) | (a & b & c) | ((~a) & c) | (a & (~b)); break;
		case 191: p = (a & b & c) | (a & (~b)) | ((~a)); break;
		case 192: p = (a & b); break;
		case 193: p = ((~a) & (~b) & (~c)) | (a & b); break;
		case 194: p = ((~a) & (~b) & c) | (a & b); break;
		case 195: p = ((~a) & (~b)) | (a & b); break;
		case 196: p = (a & b & c) | (b & (~c)); break;
		case 197: p = ((~a) & (~c)) | (a & b); break;
		case 198: p = ((~a) & (~b) & c) | (a & b & c) | (b & (~c)); break;
		case 199: p = (a & b & c) | ((~a) & (~b)) | (b & (~c)); break;
		case 200: p = (a & b & (~c)) | (b & c); break;
		case 201: p = ((~a) & (~b) & (~c)) | (a & b & (~c)) | (b & c); break;
		case 202: p = ((~a) & c) | (a & b); break;
		case 203: p = (a & b & (~c)) | ((~a) & (~b)) | (b & c); break;
		case 204: p = (b); break;
		case 205: p = (a & b & (~c)) | ((~a) & (~c)) | (b & c); break;
		case 206: p = (a & b & c) | ((~a) & c) | (b & (~c)); break;
		case 207: p = (a & b) | ((~a)); break;
		case 208: p = (a & b & c) | (a & (~c)); break;
		case 209: p = ((~b) & (~c)) | (a & b); break;
		case 210: p = ((~a) & (~b) & c) | (a & b & c) | (a & (~c)); break;
		case 211: p = (a & b & c) | ((~a) & (~b)) | (a & (~c)); break;
		case 212: p = (a & (~b) & (~c)) | (a & b & c) | (b & (~c)); break;
		case 213: p = (a & b & c) | ((~c)); break;
		case 214: p = ((~a) & (~b) & c) | (a & (~b) & (~c)) | (a & b & c) | (b & (~c)); break;
		case 215: p = (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~b)) | (b & (~c)); break;
		case 216: p = (b & c) | (a & (~c)); break;
		case 217: p = (a & b & (~c)) | ((~b) & (~c)) | (b & c); break;
		case 218: p = (a & b & c) | ((~a) & c) | (a & (~c)); break;
		case 219: p = ((~a) & (~b)) | (b & c) | (a & (~c)); break;
		case 220: p = (a & b & c) | ((~a) & b) | (a & (~c)); break;
		case 221: p = (b & c) | ((~c)); break;
		case 222: p = (a & (~b) & (~c)) | (a & b & c) | ((~a) & c) | (b & (~c)); break;
		case 223: p = (a & b & c) | (a & (~c)) | ((~a)); break;
		case 224: p = (a & b & (~c)) | (a & c); break;
		case 225: p = ((~a) & (~b) & (~c)) | (a & b & (~c)) | (a & c); break;
		case 226: p = ((~b) & c) | (a & b); break;
		case 227: p = (a & b & (~c)) | ((~a) & (~b)) | (a & c); break;
		case 228: p = (b & (~c)) | (a & c); break;
		case 229: p = (a & b & (~c)) | ((~a) & (~c)) | (a & c); break;
		case 230: p = (a & b & c) | ((~b) & c) | (b & (~c)); break;
		case 231: p = ((~a) & (~b)) | (b & (~c)) | (a & c); break;
		case 232: p = (a & (~b) & c) | (a & b & (~c)) | (b & c); break;
		case 233: p = ((~a) & (~b) & (~c)) | (a & (~b) & c) | (a & b & (~c)) | (b & c); break;
		case 234: p = (a & b & (~c)) | (c); break;
		case 235: p = (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~b)) | (b & c); break;
		case 236: p = (a & b & (~c)) | ((~a) & b) | (a & c); break;
		case 237: p = (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~c)) | (b & c); break;
		case 238: p = (b & (~c)) | (c); break;
		case 239: p = (a & b & (~c)) | (a & c) | ((~a)); break;
		case 240: p = (a); break;
		case 241: p = (a & b & (~c)) | ((~b) & (~c)) | (a & c); break;
		case 242: p = (a & b & c) | ((~b) & c) | (a & (~c)); break;
		case 243: p = (a & b) | ((~b)); break;
		case 244: p = (a & b & c) | (b & (~c)) | (a & (~b)); break;
		case 245: p = ((~a) & (~c)) | (a); break;
		case 246: p = (a & (~b) & (~c)) | (a & b & c) | ((~b) & c) | (b & (~c)); break;
		case 247: p = (a & b & c) | (b & (~c)) | ((~b)); break;
		case 248: p = (a & b & (~c)) | (b & c) | (a & (~b)); break;
		case 249: p = (a & (~b) & c) | (a & b & (~c)) | ((~b) & (~c)) | (b & c); break;
		case 250: p = ((~a) & c) | (a); break;
		case 251: p = (a & b & (~c)) | (b & c) | ((~b)); break;
		case 252: p = (a & (~b)) | (b); break;
		case 253: p = (a & b & (~c)) | ((~a) & (~c)) | (b & c) | (a & (~b)); break;
		case 254: p = (a & b & c) | ((~a) & c) | (b & (~c)) | (a & (~b)); break;
		case 255: p = 1; break;

	}
}