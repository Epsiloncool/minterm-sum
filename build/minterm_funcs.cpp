int DebugAPI::MinTermSum_00(int a, int b, int c) { return 0; };
int DebugAPI::MinTermSum_01(int a, int b, int c) { return ((~a) & (~b) & (~c)); };
int DebugAPI::MinTermSum_02(int a, int b, int c) { return ((~a) & (~b) & c); };
int DebugAPI::MinTermSum_03(int a, int b, int c) { return ((~a) & (~b)); };
int DebugAPI::MinTermSum_04(int a, int b, int c) { return ((~a) & b & (~c)); };
int DebugAPI::MinTermSum_05(int a, int b, int c) { return ((~a) & (~c)); };
int DebugAPI::MinTermSum_06(int a, int b, int c) { return ((~a) & (~b) & c) | ((~a) & b & (~c)); };
int DebugAPI::MinTermSum_07(int a, int b, int c) { return ((~a) & b & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_08(int a, int b, int c) { return ((~a) & b & c); };
int DebugAPI::MinTermSum_09(int a, int b, int c) { return ((~a) & (~b) & (~c)) | ((~a) & b & c); };
int DebugAPI::MinTermSum_0a(int a, int b, int c) { return ((~a) & c); };
int DebugAPI::MinTermSum_0b(int a, int b, int c) { return ((~a) & b & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_0c(int a, int b, int c) { return ((~a) & b); };
int DebugAPI::MinTermSum_0d(int a, int b, int c) { return ((~a) & b & c) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_0e(int a, int b, int c) { return ((~a) & b & (~c)) | ((~a) & c); };
int DebugAPI::MinTermSum_0f(int a, int b, int c) { return ((~a)); };
int DebugAPI::MinTermSum_10(int a, int b, int c) { return (a & (~b) & (~c)); };
int DebugAPI::MinTermSum_11(int a, int b, int c) { return ((~b) & (~c)); };
int DebugAPI::MinTermSum_12(int a, int b, int c) { return ((~a) & (~b) & c) | (a & (~b) & (~c)); };
int DebugAPI::MinTermSum_13(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_14(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)); };
int DebugAPI::MinTermSum_15(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_16(int a, int b, int c) { return ((~a) & (~b) & c) | ((~a) & b & (~c)) | (a & (~b) & (~c)); };
int DebugAPI::MinTermSum_17(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_18(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & (~c)); };
int DebugAPI::MinTermSum_19(int a, int b, int c) { return ((~a) & b & c) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_1a(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & c); };
int DebugAPI::MinTermSum_1b(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_1c(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & b); };
int DebugAPI::MinTermSum_1d(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & (~c)) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_1e(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)) | ((~a) & c); };
int DebugAPI::MinTermSum_1f(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a)); };
int DebugAPI::MinTermSum_20(int a, int b, int c) { return (a & (~b) & c); };
int DebugAPI::MinTermSum_21(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & (~b) & c); };
int DebugAPI::MinTermSum_22(int a, int b, int c) { return ((~b) & c); };
int DebugAPI::MinTermSum_23(int a, int b, int c) { return (a & (~b) & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_24(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & c); };
int DebugAPI::MinTermSum_25(int a, int b, int c) { return (a & (~b) & c) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_26(int a, int b, int c) { return ((~a) & b & (~c)) | ((~b) & c); };
int DebugAPI::MinTermSum_27(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_28(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c); };
int DebugAPI::MinTermSum_29(int a, int b, int c) { return ((~a) & (~b) & (~c)) | ((~a) & b & c) | (a & (~b) & c); };
int DebugAPI::MinTermSum_2a(int a, int b, int c) { return (a & (~b) & c) | ((~a) & c); };
int DebugAPI::MinTermSum_2b(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_2c(int a, int b, int c) { return (a & (~b) & c) | ((~a) & b); };
int DebugAPI::MinTermSum_2d(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_2e(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & c) | ((~a) & c); };
int DebugAPI::MinTermSum_2f(int a, int b, int c) { return (a & (~b) & c) | ((~a)); };
int DebugAPI::MinTermSum_30(int a, int b, int c) { return (a & (~b)); };
int DebugAPI::MinTermSum_31(int a, int b, int c) { return (a & (~b) & c) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_32(int a, int b, int c) { return (a & (~b) & (~c)) | ((~b) & c); };
int DebugAPI::MinTermSum_33(int a, int b, int c) { return ((~b)); };
int DebugAPI::MinTermSum_34(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_35(int a, int b, int c) { return ((~a) & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_36(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)) | ((~b) & c); };
int DebugAPI::MinTermSum_37(int a, int b, int c) { return ((~a) & b & (~c)) | ((~b)); };
int DebugAPI::MinTermSum_38(int a, int b, int c) { return ((~a) & b & c) | (a & (~b)); };
int DebugAPI::MinTermSum_39(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_3a(int a, int b, int c) { return ((~a) & c) | (a & (~b)); };
int DebugAPI::MinTermSum_3b(int a, int b, int c) { return ((~a) & b & c) | ((~b)); };
int DebugAPI::MinTermSum_3c(int a, int b, int c) { return ((~a) & b) | (a & (~b)); };
int DebugAPI::MinTermSum_3d(int a, int b, int c) { return ((~a) & b & c) | ((~a) & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_3e(int a, int b, int c) { return ((~a) & b & (~c)) | ((~a) & c) | (a & (~b)); };
int DebugAPI::MinTermSum_3f(int a, int b, int c) { return (a & (~b)) | ((~a)); };
int DebugAPI::MinTermSum_40(int a, int b, int c) { return (a & b & (~c)); };
int DebugAPI::MinTermSum_41(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & b & (~c)); };
int DebugAPI::MinTermSum_42(int a, int b, int c) { return ((~a) & (~b) & c) | (a & b & (~c)); };
int DebugAPI::MinTermSum_43(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_44(int a, int b, int c) { return (b & (~c)); };
int DebugAPI::MinTermSum_45(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_46(int a, int b, int c) { return ((~a) & (~b) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_47(int a, int b, int c) { return ((~a) & (~b)) | (b & (~c)); };
int DebugAPI::MinTermSum_48(int a, int b, int c) { return ((~a) & b & c) | (a & b & (~c)); };
int DebugAPI::MinTermSum_49(int a, int b, int c) { return ((~a) & (~b) & (~c)) | ((~a) & b & c) | (a & b & (~c)); };
int DebugAPI::MinTermSum_4a(int a, int b, int c) { return (a & b & (~c)) | ((~a) & c); };
int DebugAPI::MinTermSum_4b(int a, int b, int c) { return ((~a) & b & c) | (a & b & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_4c(int a, int b, int c) { return (a & b & (~c)) | ((~a) & b); };
int DebugAPI::MinTermSum_4d(int a, int b, int c) { return ((~a) & b & c) | (a & b & (~c)) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_4e(int a, int b, int c) { return ((~a) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_4f(int a, int b, int c) { return (a & b & (~c)) | ((~a)); };
int DebugAPI::MinTermSum_50(int a, int b, int c) { return (a & (~c)); };
int DebugAPI::MinTermSum_51(int a, int b, int c) { return (a & b & (~c)) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_52(int a, int b, int c) { return ((~a) & (~b) & c) | (a & (~c)); };
int DebugAPI::MinTermSum_53(int a, int b, int c) { return ((~a) & (~b)) | (a & (~c)); };
int DebugAPI::MinTermSum_54(int a, int b, int c) { return (a & (~b) & (~c)) | (b & (~c)); };
int DebugAPI::MinTermSum_55(int a, int b, int c) { return ((~c)); };
int DebugAPI::MinTermSum_56(int a, int b, int c) { return ((~a) & (~b) & c) | (a & (~b) & (~c)) | (b & (~c)); };
int DebugAPI::MinTermSum_57(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & (~b)) | (b & (~c)); };
int DebugAPI::MinTermSum_58(int a, int b, int c) { return ((~a) & b & c) | (a & (~c)); };
int DebugAPI::MinTermSum_59(int a, int b, int c) { return ((~a) & b & c) | (a & b & (~c)) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_5a(int a, int b, int c) { return ((~a) & c) | (a & (~c)); };
int DebugAPI::MinTermSum_5b(int a, int b, int c) { return ((~a) & b & c) | ((~a) & (~b)) | (a & (~c)); };
int DebugAPI::MinTermSum_5c(int a, int b, int c) { return ((~a) & b) | (a & (~c)); };
int DebugAPI::MinTermSum_5d(int a, int b, int c) { return ((~a) & b & c) | ((~c)); };
int DebugAPI::MinTermSum_5e(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_5f(int a, int b, int c) { return (a & (~c)) | ((~a)); };
int DebugAPI::MinTermSum_60(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)); };
int DebugAPI::MinTermSum_61(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & (~b) & c) | (a & b & (~c)); };
int DebugAPI::MinTermSum_62(int a, int b, int c) { return (a & b & (~c)) | ((~b) & c); };
int DebugAPI::MinTermSum_63(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_64(int a, int b, int c) { return (a & (~b) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_65(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_66(int a, int b, int c) { return ((~b) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_67(int a, int b, int c) { return (a & (~b) & c) | ((~a) & (~b)) | (b & (~c)); };
int DebugAPI::MinTermSum_68(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)); };
int DebugAPI::MinTermSum_69(int a, int b, int c) { return ((~a) & (~b) & (~c)) | ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)); };
int DebugAPI::MinTermSum_6a(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~a) & c); };
int DebugAPI::MinTermSum_6b(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_6c(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~a) & b); };
int DebugAPI::MinTermSum_6d(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_6e(int a, int b, int c) { return (a & (~b) & c) | ((~a) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_6f(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~a)); };
int DebugAPI::MinTermSum_70(int a, int b, int c) { return (a & b & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_71(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_72(int a, int b, int c) { return ((~b) & c) | (a & (~c)); };
int DebugAPI::MinTermSum_73(int a, int b, int c) { return (a & b & (~c)) | ((~b)); };
int DebugAPI::MinTermSum_74(int a, int b, int c) { return (b & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_75(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_76(int a, int b, int c) { return (a & (~b) & (~c)) | ((~b) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_77(int a, int b, int c) { return (b & (~c)) | ((~b)); };
int DebugAPI::MinTermSum_78(int a, int b, int c) { return ((~a) & b & c) | (a & b & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_79(int a, int b, int c) { return ((~a) & b & c) | (a & (~b) & c) | (a & b & (~c)) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_7a(int a, int b, int c) { return (a & b & (~c)) | ((~a) & c) | (a & (~b)); };
int DebugAPI::MinTermSum_7b(int a, int b, int c) { return ((~a) & b & c) | (a & b & (~c)) | ((~b)); };
int DebugAPI::MinTermSum_7c(int a, int b, int c) { return (a & b & (~c)) | ((~a) & b) | (a & (~b)); };
int DebugAPI::MinTermSum_7d(int a, int b, int c) { return ((~a) & b & c) | (a & b & (~c)) | ((~a) & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_7e(int a, int b, int c) { return ((~a) & c) | (b & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_7f(int a, int b, int c) { return (a & b & (~c)) | (a & (~b)) | ((~a)); };
int DebugAPI::MinTermSum_80(int a, int b, int c) { return (a & b & c); };
int DebugAPI::MinTermSum_81(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & b & c); };
int DebugAPI::MinTermSum_82(int a, int b, int c) { return ((~a) & (~b) & c) | (a & b & c); };
int DebugAPI::MinTermSum_83(int a, int b, int c) { return (a & b & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_84(int a, int b, int c) { return ((~a) & b & (~c)) | (a & b & c); };
int DebugAPI::MinTermSum_85(int a, int b, int c) { return (a & b & c) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_86(int a, int b, int c) { return ((~a) & (~b) & c) | ((~a) & b & (~c)) | (a & b & c); };
int DebugAPI::MinTermSum_87(int a, int b, int c) { return ((~a) & b & (~c)) | (a & b & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_88(int a, int b, int c) { return (b & c); };
int DebugAPI::MinTermSum_89(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_8a(int a, int b, int c) { return (a & b & c) | ((~a) & c); };
int DebugAPI::MinTermSum_8b(int a, int b, int c) { return ((~a) & (~b)) | (b & c); };
int DebugAPI::MinTermSum_8c(int a, int b, int c) { return (a & b & c) | ((~a) & b); };
int DebugAPI::MinTermSum_8d(int a, int b, int c) { return ((~a) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_8e(int a, int b, int c) { return ((~a) & b & (~c)) | (a & b & c) | ((~a) & c); };
int DebugAPI::MinTermSum_8f(int a, int b, int c) { return (a & b & c) | ((~a)); };
int DebugAPI::MinTermSum_90(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c); };
int DebugAPI::MinTermSum_91(int a, int b, int c) { return (a & b & c) | ((~b) & (~c)); };
int DebugAPI::MinTermSum_92(int a, int b, int c) { return ((~a) & (~b) & c) | (a & (~b) & (~c)) | (a & b & c); };
int DebugAPI::MinTermSum_93(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_94(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c); };
int DebugAPI::MinTermSum_95(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~c)); };
int DebugAPI::MinTermSum_96(int a, int b, int c) { return ((~a) & (~b) & c) | ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c); };
int DebugAPI::MinTermSum_97(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~b)); };
int DebugAPI::MinTermSum_98(int a, int b, int c) { return (a & (~b) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_99(int a, int b, int c) { return ((~b) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_9a(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~a) & c); };
int DebugAPI::MinTermSum_9b(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & (~b)) | (b & c); };
int DebugAPI::MinTermSum_9c(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~a) & b); };
int DebugAPI::MinTermSum_9d(int a, int b, int c) { return (a & (~b) & (~c)) | ((~a) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_9e(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c) | ((~a) & c); };
int DebugAPI::MinTermSum_9f(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~a)); };
int DebugAPI::MinTermSum_a0(int a, int b, int c) { return (a & c); };
int DebugAPI::MinTermSum_a1(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & c); };
int DebugAPI::MinTermSum_a2(int a, int b, int c) { return (a & b & c) | ((~b) & c); };
int DebugAPI::MinTermSum_a3(int a, int b, int c) { return ((~a) & (~b)) | (a & c); };
int DebugAPI::MinTermSum_a4(int a, int b, int c) { return ((~a) & b & (~c)) | (a & c); };
int DebugAPI::MinTermSum_a5(int a, int b, int c) { return ((~a) & (~c)) | (a & c); };
int DebugAPI::MinTermSum_a6(int a, int b, int c) { return ((~a) & b & (~c)) | (a & b & c) | ((~b) & c); };
int DebugAPI::MinTermSum_a7(int a, int b, int c) { return ((~a) & b & (~c)) | ((~a) & (~b)) | (a & c); };
int DebugAPI::MinTermSum_a8(int a, int b, int c) { return (a & (~b) & c) | (b & c); };
int DebugAPI::MinTermSum_a9(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & (~b) & c) | (b & c); };
int DebugAPI::MinTermSum_aa(int a, int b, int c) { return (c); };
int DebugAPI::MinTermSum_ab(int a, int b, int c) { return (a & (~b) & c) | ((~a) & (~b)) | (b & c); };
int DebugAPI::MinTermSum_ac(int a, int b, int c) { return ((~a) & b) | (a & c); };
int DebugAPI::MinTermSum_ad(int a, int b, int c) { return (a & (~b) & c) | ((~a) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_ae(int a, int b, int c) { return ((~a) & b & (~c)) | (c); };
int DebugAPI::MinTermSum_af(int a, int b, int c) { return (a & c) | ((~a)); };
int DebugAPI::MinTermSum_b0(int a, int b, int c) { return (a & b & c) | (a & (~b)); };
int DebugAPI::MinTermSum_b1(int a, int b, int c) { return ((~b) & (~c)) | (a & c); };
int DebugAPI::MinTermSum_b2(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~b) & c); };
int DebugAPI::MinTermSum_b3(int a, int b, int c) { return (a & b & c) | ((~b)); };
int DebugAPI::MinTermSum_b4(int a, int b, int c) { return ((~a) & b & (~c)) | (a & b & c) | (a & (~b)); };
int DebugAPI::MinTermSum_b5(int a, int b, int c) { return (a & b & c) | ((~a) & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_b6(int a, int b, int c) { return ((~a) & b & (~c)) | (a & (~b) & (~c)) | (a & b & c) | ((~b) & c); };
int DebugAPI::MinTermSum_b7(int a, int b, int c) { return ((~a) & b & (~c)) | (a & b & c) | ((~b)); };
int DebugAPI::MinTermSum_b8(int a, int b, int c) { return (b & c) | (a & (~b)); };
int DebugAPI::MinTermSum_b9(int a, int b, int c) { return (a & (~b) & c) | ((~b) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_ba(int a, int b, int c) { return (a & b & c) | ((~a) & c) | (a & (~b)); };
int DebugAPI::MinTermSum_bb(int a, int b, int c) { return (b & c) | ((~b)); };
int DebugAPI::MinTermSum_bc(int a, int b, int c) { return (a & b & c) | ((~a) & b) | (a & (~b)); };
int DebugAPI::MinTermSum_bd(int a, int b, int c) { return ((~a) & (~c)) | (b & c) | (a & (~b)); };
int DebugAPI::MinTermSum_be(int a, int b, int c) { return ((~a) & b & (~c)) | (a & b & c) | ((~a) & c) | (a & (~b)); };
int DebugAPI::MinTermSum_bf(int a, int b, int c) { return (a & b & c) | (a & (~b)) | ((~a)); };
int DebugAPI::MinTermSum_c0(int a, int b, int c) { return (a & b); };
int DebugAPI::MinTermSum_c1(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & b); };
int DebugAPI::MinTermSum_c2(int a, int b, int c) { return ((~a) & (~b) & c) | (a & b); };
int DebugAPI::MinTermSum_c3(int a, int b, int c) { return ((~a) & (~b)) | (a & b); };
int DebugAPI::MinTermSum_c4(int a, int b, int c) { return (a & b & c) | (b & (~c)); };
int DebugAPI::MinTermSum_c5(int a, int b, int c) { return ((~a) & (~c)) | (a & b); };
int DebugAPI::MinTermSum_c6(int a, int b, int c) { return ((~a) & (~b) & c) | (a & b & c) | (b & (~c)); };
int DebugAPI::MinTermSum_c7(int a, int b, int c) { return (a & b & c) | ((~a) & (~b)) | (b & (~c)); };
int DebugAPI::MinTermSum_c8(int a, int b, int c) { return (a & b & (~c)) | (b & c); };
int DebugAPI::MinTermSum_c9(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & b & (~c)) | (b & c); };
int DebugAPI::MinTermSum_ca(int a, int b, int c) { return ((~a) & c) | (a & b); };
int DebugAPI::MinTermSum_cb(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~b)) | (b & c); };
int DebugAPI::MinTermSum_cc(int a, int b, int c) { return (b); };
int DebugAPI::MinTermSum_cd(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_ce(int a, int b, int c) { return (a & b & c) | ((~a) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_cf(int a, int b, int c) { return (a & b) | ((~a)); };
int DebugAPI::MinTermSum_d0(int a, int b, int c) { return (a & b & c) | (a & (~c)); };
int DebugAPI::MinTermSum_d1(int a, int b, int c) { return ((~b) & (~c)) | (a & b); };
int DebugAPI::MinTermSum_d2(int a, int b, int c) { return ((~a) & (~b) & c) | (a & b & c) | (a & (~c)); };
int DebugAPI::MinTermSum_d3(int a, int b, int c) { return (a & b & c) | ((~a) & (~b)) | (a & (~c)); };
int DebugAPI::MinTermSum_d4(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | (b & (~c)); };
int DebugAPI::MinTermSum_d5(int a, int b, int c) { return (a & b & c) | ((~c)); };
int DebugAPI::MinTermSum_d6(int a, int b, int c) { return ((~a) & (~b) & c) | (a & (~b) & (~c)) | (a & b & c) | (b & (~c)); };
int DebugAPI::MinTermSum_d7(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~a) & (~b)) | (b & (~c)); };
int DebugAPI::MinTermSum_d8(int a, int b, int c) { return (b & c) | (a & (~c)); };
int DebugAPI::MinTermSum_d9(int a, int b, int c) { return (a & b & (~c)) | ((~b) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_da(int a, int b, int c) { return (a & b & c) | ((~a) & c) | (a & (~c)); };
int DebugAPI::MinTermSum_db(int a, int b, int c) { return ((~a) & (~b)) | (b & c) | (a & (~c)); };
int DebugAPI::MinTermSum_dc(int a, int b, int c) { return (a & b & c) | ((~a) & b) | (a & (~c)); };
int DebugAPI::MinTermSum_dd(int a, int b, int c) { return (b & c) | ((~c)); };
int DebugAPI::MinTermSum_de(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~a) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_df(int a, int b, int c) { return (a & b & c) | (a & (~c)) | ((~a)); };
int DebugAPI::MinTermSum_e0(int a, int b, int c) { return (a & b & (~c)) | (a & c); };
int DebugAPI::MinTermSum_e1(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & b & (~c)) | (a & c); };
int DebugAPI::MinTermSum_e2(int a, int b, int c) { return ((~b) & c) | (a & b); };
int DebugAPI::MinTermSum_e3(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~b)) | (a & c); };
int DebugAPI::MinTermSum_e4(int a, int b, int c) { return (b & (~c)) | (a & c); };
int DebugAPI::MinTermSum_e5(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~c)) | (a & c); };
int DebugAPI::MinTermSum_e6(int a, int b, int c) { return (a & b & c) | ((~b) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_e7(int a, int b, int c) { return ((~a) & (~b)) | (b & (~c)) | (a & c); };
int DebugAPI::MinTermSum_e8(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | (b & c); };
int DebugAPI::MinTermSum_e9(int a, int b, int c) { return ((~a) & (~b) & (~c)) | (a & (~b) & c) | (a & b & (~c)) | (b & c); };
int DebugAPI::MinTermSum_ea(int a, int b, int c) { return (a & b & (~c)) | (c); };
int DebugAPI::MinTermSum_eb(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~b)) | (b & c); };
int DebugAPI::MinTermSum_ec(int a, int b, int c) { return (a & b & (~c)) | ((~a) & b) | (a & c); };
int DebugAPI::MinTermSum_ed(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~a) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_ee(int a, int b, int c) { return (b & (~c)) | (c); };
int DebugAPI::MinTermSum_ef(int a, int b, int c) { return (a & b & (~c)) | (a & c) | ((~a)); };
int DebugAPI::MinTermSum_f0(int a, int b, int c) { return (a); };
int DebugAPI::MinTermSum_f1(int a, int b, int c) { return (a & b & (~c)) | ((~b) & (~c)) | (a & c); };
int DebugAPI::MinTermSum_f2(int a, int b, int c) { return (a & b & c) | ((~b) & c) | (a & (~c)); };
int DebugAPI::MinTermSum_f3(int a, int b, int c) { return (a & b) | ((~b)); };
int DebugAPI::MinTermSum_f4(int a, int b, int c) { return (a & b & c) | (b & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_f5(int a, int b, int c) { return ((~a) & (~c)) | (a); };
int DebugAPI::MinTermSum_f6(int a, int b, int c) { return (a & (~b) & (~c)) | (a & b & c) | ((~b) & c) | (b & (~c)); };
int DebugAPI::MinTermSum_f7(int a, int b, int c) { return (a & b & c) | (b & (~c)) | ((~b)); };
int DebugAPI::MinTermSum_f8(int a, int b, int c) { return (a & b & (~c)) | (b & c) | (a & (~b)); };
int DebugAPI::MinTermSum_f9(int a, int b, int c) { return (a & (~b) & c) | (a & b & (~c)) | ((~b) & (~c)) | (b & c); };
int DebugAPI::MinTermSum_fa(int a, int b, int c) { return ((~a) & c) | (a); };
int DebugAPI::MinTermSum_fb(int a, int b, int c) { return (a & b & (~c)) | (b & c) | ((~b)); };
int DebugAPI::MinTermSum_fc(int a, int b, int c) { return (a & (~b)) | (b); };
int DebugAPI::MinTermSum_fd(int a, int b, int c) { return (a & b & (~c)) | ((~a) & (~c)) | (b & c) | (a & (~b)); };
int DebugAPI::MinTermSum_fe(int a, int b, int c) { return (a & b & c) | ((~a) & c) | (b & (~c)) | (a & (~b)); };
int DebugAPI::MinTermSum_ff(int a, int b, int c) { return 1; };
