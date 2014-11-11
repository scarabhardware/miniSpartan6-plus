/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {0, 0, 0, 0};
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {10, 0, 0, 0};



static void Initial_1206_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_1226_1(char *t0)
{
    char t6[8];
    char t30[16];
    char t31[16];
    char t35[8];
    char t38[8];
    char t76[8];
    char t80[8];
    char t81[8];
    char t89[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7952);
    *((int *)t2) = 1;
    t3 = (t0 + 5680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB12:    t2 = xsi_vlog_time(t30, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t30, 0, 0, 64, 0LL);
    t2 = xsi_vlog_time(t30, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 1928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_minus(t31, 64, t30, 64, t5, 64);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 64);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t30, 64, t4, 64, t5, 32);
    memset(t6, 0, 8);
    t7 = (t30 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t7) != 0)
        goto LAB15;

LAB16:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB17;

LAB18:    memcpy(t38, t6, 8);

LAB19:    t66 = (t38 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t38);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB27;

LAB28:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t30, 64, t4, 64, t5, 32);
    memset(t6, 0, 8);
    t7 = (t30 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t7) != 0)
        goto LAB32;

LAB33:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB34;

LAB35:    memcpy(t38, t6, 8);

LAB36:    t66 = (t38 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t38);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB44;

LAB45:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    xsi_vlog_unsigned_equal(t30, 64, t4, 64, t5, 32);
    memset(t6, 0, 8);
    t7 = (t30 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t7) != 0)
        goto LAB49;

LAB50:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB51;

LAB52:    memcpy(t38, t6, 8);

LAB53:    memset(t76, 0, 8);
    t48 = (t38 + 4);
    t67 = *((unsigned int *)t48);
    t68 = (~(t67));
    t69 = *((unsigned int *)t38);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t48) != 0)
        goto LAB63;

LAB64:    t66 = (t76 + 4);
    t77 = *((unsigned int *)t76);
    t78 = *((unsigned int *)t66);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB65;

LAB66:    memcpy(t89, t76, 8);

LAB67:    t121 = (t89 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t89);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB75;

LAB76:
LAB77:
LAB46:
LAB29:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    t28 = ((char*)((ng0)));
    t29 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 64, 0LL);
    goto LAB11;

LAB13:    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB15:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB16;

LAB17:    t22 = (t0 + 2568);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t32 = (t0 + 2888);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_unsigned_leq(t31, 64, t29, 64, t34, 64);
    memset(t35, 0, 8);
    t36 = (t31 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (~(t17));
    t19 = *((unsigned int *)t31);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t36) != 0)
        goto LAB22;

LAB23:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t35);
    t26 = (t24 & t25);
    *((unsigned int *)t38) = t26;
    t39 = (t6 + 4);
    t40 = (t35 + 4);
    t41 = (t38 + 4);
    t27 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t40);
    t43 = (t27 | t42);
    *((unsigned int *)t41) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB20:    *((unsigned int *)t35) = 1;
    goto LAB23;

LAB22:    t37 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB23;

LAB24:    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t41);
    *((unsigned int *)t38) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t35);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t64 & t60);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    goto LAB26;

LAB27:    t72 = (t0 + 2568);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t75, t74, 0, 0, 64, 0LL);
    goto LAB29;

LAB30:    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB32:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB33;

LAB34:    t22 = (t0 + 2568);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t32 = (t0 + 2888);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_unsigned_greater(t31, 64, t29, 64, t34, 64);
    memset(t35, 0, 8);
    t36 = (t31 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (~(t17));
    t19 = *((unsigned int *)t31);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t36) != 0)
        goto LAB39;

LAB40:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t35);
    t26 = (t24 & t25);
    *((unsigned int *)t38) = t26;
    t39 = (t6 + 4);
    t40 = (t35 + 4);
    t41 = (t38 + 4);
    t27 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t40);
    t43 = (t27 | t42);
    *((unsigned int *)t41) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB36;

LAB37:    *((unsigned int *)t35) = 1;
    goto LAB40;

LAB39:    t37 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB40;

LAB41:    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t41);
    *((unsigned int *)t38) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t35);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t64 & t60);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    goto LAB43;

LAB44:    t72 = ((char*)((ng0)));
    t73 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 64, 0LL);
    goto LAB46;

LAB47:    *((unsigned int *)t6) = 1;
    goto LAB50;

LAB49:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB50;

LAB51:    t22 = (t0 + 1928);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t32 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t31, 64, t29, 64, t32, 32);
    memset(t35, 0, 8);
    t33 = (t31 + 4);
    t17 = *((unsigned int *)t33);
    t18 = (~(t17));
    t19 = *((unsigned int *)t31);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t33) != 0)
        goto LAB56;

LAB57:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t35);
    t26 = (t24 & t25);
    *((unsigned int *)t38) = t26;
    t36 = (t6 + 4);
    t37 = (t35 + 4);
    t39 = (t38 + 4);
    t27 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t27 | t42);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t39);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB53;

LAB54:    *((unsigned int *)t35) = 1;
    goto LAB57;

LAB56:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB57;

LAB58:    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t38) = (t46 | t47);
    t40 = (t6 + 4);
    t41 = (t35 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t40);
    t53 = (~(t52));
    t54 = *((unsigned int *)t35);
    t55 = (~(t54));
    t56 = *((unsigned int *)t41);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t63 & t61);
    t64 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t64 & t60);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    goto LAB60;

LAB61:    *((unsigned int *)t76) = 1;
    goto LAB64;

LAB63:    t49 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB64;

LAB65:    t72 = (t0 + 4008);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng2)));
    memset(t80, 0, 8);
    xsi_vlog_signed_equal(t80, 32, t74, 32, t75, 32);
    memset(t81, 0, 8);
    t82 = (t80 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t80);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t82) != 0)
        goto LAB70;

LAB71:    t90 = *((unsigned int *)t76);
    t91 = *((unsigned int *)t81);
    t92 = (t90 & t91);
    *((unsigned int *)t89) = t92;
    t93 = (t76 + 4);
    t94 = (t81 + 4);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t93);
    t97 = *((unsigned int *)t94);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 != 0);
    if (t100 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB67;

LAB68:    *((unsigned int *)t81) = 1;
    goto LAB71;

LAB70:    t88 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB71;

LAB72:    t101 = *((unsigned int *)t89);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t89) = (t101 | t102);
    t103 = (t76 + 4);
    t104 = (t81 + 4);
    t105 = *((unsigned int *)t76);
    t106 = (~(t105));
    t107 = *((unsigned int *)t103);
    t108 = (~(t107));
    t109 = *((unsigned int *)t81);
    t110 = (~(t109));
    t111 = *((unsigned int *)t104);
    t112 = (~(t111));
    t113 = (t106 & t108);
    t114 = (t110 & t112);
    t115 = (~(t113));
    t116 = (~(t114));
    t117 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t117 & t115);
    t118 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t118 & t116);
    t119 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t119 & t115);
    t120 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t120 & t116);
    goto LAB74;

LAB75:    t127 = (t0 + 2568);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    t130 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t130, t129, 0, 0, 64, 0LL);
    goto LAB77;

}

static void Always_1240_2(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    double t7;
    double t8;
    char *t10;
    double t11;
    double t12;

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7968);
    *((int *)t2) = 1;
    t3 = (t0 + 5928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = xsi_vlog_convert_to_real(t6, 64, 2);
    t8 = (1.5000000000000000 * t7);
    xsi_vlog_convert_real_to_values(t8, t9, 64);
    t10 = (t0 + 2888);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 64);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = xsi_vlog_convert_to_real(t4, 64, 2);
    t8 = (t7 * 9.0999999999999996);
    t5 = ((char*)((ng3)));
    t11 = xsi_vlog_convert_to_real(t5, 32, 1);
    t12 = (t8 / t11);
    xsi_vlog_convert_real_to_values(t12, t9, 64);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 64);
    goto LAB2;

}

static void Always_1245_3(char *t0)
{
    char t13[16];
    char t14[16];
    char t15[8];
    char t26[8];
    char t34[8];
    char t76[8];
    char t80[8];
    char t81[8];
    char t89[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7984);
    *((int *)t2) = 1;
    t3 = (t0 + 6176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB8:    t2 = xsi_vlog_time(t13, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t13, 0, 0, 64, 0LL);
    t2 = xsi_vlog_time(t13, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_minus(t14, 64, t13, 64, t5, 64);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 64);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t13, 64, t4, 64, t5, 32);
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB13;

LAB14:    memcpy(t34, t15, 8);

LAB15:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB23;

LAB24:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t13, 64, t4, 64, t5, 32);
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t11) != 0)
        goto LAB28;

LAB29:    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB30;

LAB31:    memcpy(t34, t15, 8);

LAB32:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB40;

LAB41:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    xsi_vlog_unsigned_equal(t13, 64, t4, 64, t5, 32);
    memset(t15, 0, 8);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t11) != 0)
        goto LAB45;

LAB46:    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB47;

LAB48:    memcpy(t34, t15, 8);

LAB49:    memset(t76, 0, 8);
    t48 = (t34 + 4);
    t67 = *((unsigned int *)t48);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t48) != 0)
        goto LAB59;

LAB60:    t66 = (t76 + 4);
    t77 = *((unsigned int *)t76);
    t78 = *((unsigned int *)t66);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB61;

LAB62:    memcpy(t89, t76, 8);

LAB63:    t121 = (t89 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t89);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB71;

LAB72:
LAB73:
LAB42:
LAB25:
LAB7:    goto LAB2;

LAB5:    t11 = ((char*)((ng0)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 64, 0LL);
    goto LAB7;

LAB9:    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB11:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB13:    t20 = (t0 + 2728);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 3048);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_unsigned_leq(t14, 64, t22, 64, t25, 64);
    memset(t26, 0, 8);
    t27 = (t14 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t14);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t27) != 0)
        goto LAB18;

LAB19:    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t15 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB15;

LAB16:    *((unsigned int *)t26) = 1;
    goto LAB19;

LAB18:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB19;

LAB20:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t15 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB22;

LAB23:    t72 = (t0 + 2728);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t75, t74, 0, 0, 64, 0LL);
    goto LAB25;

LAB26:    *((unsigned int *)t15) = 1;
    goto LAB29;

LAB28:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB30:    t20 = (t0 + 2728);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 3048);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_unsigned_greater(t14, 64, t22, 64, t25, 64);
    memset(t26, 0, 8);
    t27 = (t14 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t14);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t27) != 0)
        goto LAB35;

LAB36:    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t15 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t26) = 1;
    goto LAB36;

LAB35:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB36;

LAB37:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t15 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB39;

LAB40:    t72 = ((char*)((ng0)));
    t73 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 64, 0LL);
    goto LAB42;

LAB43:    *((unsigned int *)t15) = 1;
    goto LAB46;

LAB45:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB47:    t20 = (t0 + 2088);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t14, 64, t22, 64, t23, 32);
    memset(t26, 0, 8);
    t24 = (t14 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t14);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t24) != 0)
        goto LAB52;

LAB53:    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t27 = (t15 + 4);
    t33 = (t26 + 4);
    t38 = (t34 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t26) = 1;
    goto LAB53;

LAB52:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB53;

LAB54:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t34) = (t46 | t47);
    t39 = (t15 + 4);
    t40 = (t26 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t39);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t40);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t62 & t60);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB56;

LAB57:    *((unsigned int *)t76) = 1;
    goto LAB60;

LAB59:    t49 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB60;

LAB61:    t72 = (t0 + 4168);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng2)));
    memset(t80, 0, 8);
    xsi_vlog_signed_equal(t80, 32, t74, 32, t75, 32);
    memset(t81, 0, 8);
    t82 = (t80 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t80);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t82) != 0)
        goto LAB66;

LAB67:    t90 = *((unsigned int *)t76);
    t91 = *((unsigned int *)t81);
    t92 = (t90 & t91);
    *((unsigned int *)t89) = t92;
    t93 = (t76 + 4);
    t94 = (t81 + 4);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t93);
    t97 = *((unsigned int *)t94);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 != 0);
    if (t100 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB63;

LAB64:    *((unsigned int *)t81) = 1;
    goto LAB67;

LAB66:    t88 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB67;

LAB68:    t101 = *((unsigned int *)t89);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t89) = (t101 | t102);
    t103 = (t76 + 4);
    t104 = (t81 + 4);
    t105 = *((unsigned int *)t76);
    t106 = (~(t105));
    t107 = *((unsigned int *)t103);
    t108 = (~(t107));
    t109 = *((unsigned int *)t81);
    t110 = (~(t109));
    t111 = *((unsigned int *)t104);
    t112 = (~(t111));
    t113 = (t106 & t108);
    t114 = (t110 & t112);
    t115 = (~(t113));
    t116 = (~(t114));
    t117 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t117 & t115);
    t118 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t118 & t116);
    t119 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t119 & t115);
    t120 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t120 & t116);
    goto LAB70;

LAB71:    t127 = (t0 + 2728);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    t130 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t130, t129, 0, 0, 64, 0LL);
    goto LAB73;

}

static void Always_1259_4(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    double t7;
    double t8;
    char *t10;

LAB0:    t1 = (t0 + 6392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8000);
    *((int *)t2) = 1;
    t3 = (t0 + 6424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = xsi_vlog_convert_to_real(t6, 64, 2);
    t8 = (1.5000000000000000 * t7);
    xsi_vlog_convert_real_to_values(t8, t9, 64);
    t10 = (t0 + 3048);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 64);
    goto LAB2;

}

static void Always_1263_5(char *t0)
{
    char t13[8];
    char t21[8];
    char t36[8];
    char t37[8];
    char t45[8];
    char t84[16];
    char t88[8];
    char t94[8];
    char t101[8];
    char t109[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    double t85;
    double t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;

LAB0:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8016);
    *((int *)t2) = 1;
    t3 = (t0 + 6672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB8:    if (t18 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t13) = 1;

LAB11:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t12) != 0)
        goto LAB14;

LAB15:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB16;

LAB17:    memcpy(t45, t21, 8);

LAB18:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB7:    goto LAB2;

LAB5:    t11 = ((char*)((ng1)));
    t12 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB12:    *((unsigned int *)t21) = 1;
    goto LAB15;

LAB14:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB15;

LAB16:    t32 = (t0 + 4008);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t34, 32, t35, 32);
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t38) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t21);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t21 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t37) = 1;
    goto LAB22;

LAB21:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t21 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t21);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB25;

LAB26:
LAB29:    t83 = (t0 + 6448);
    xsi_process_wait(t83, 1LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t84, 64, t4, 64, t5, 32);
    t11 = (t84 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t84);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:
LAB33:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t85 = xsi_vlog_convert_to_real(t4, 64, 2);
    t86 = (t85 < 0.0000000000000000);
    if (t86 == 1)
        goto LAB34;

LAB35:    t85 = (t85 + 0.50000000000000000);
    t85 = ((int64)(t85));

LAB36:    t85 = (t85 * 1.0000000000000000);
    t5 = (t0 + 6448);
    xsi_process_wait(t5, t85);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    t12 = ((char*)((ng1)));
    t27 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t27, t12, 0, 0, 1, 0LL);
    goto LAB33;

LAB34:    t85 = 0.0000000000000000;
    goto LAB36;

LAB37:    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t27 = *((char **)t12);
    t28 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_not_equal(t13, 32, t27, 32, t28, 32);
    memset(t21, 0, 8);
    t32 = (t13 + 4);
    t6 = *((unsigned int *)t32);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t32) != 0)
        goto LAB40;

LAB41:    t34 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t34);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB42;

LAB43:    memcpy(t45, t21, 8);

LAB44:    memset(t88, 0, 8);
    t89 = (t45 + 4);
    t63 = *((unsigned int *)t89);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t89) != 0)
        goto LAB54;

LAB55:    t91 = (t88 + 4);
    t68 = *((unsigned int *)t88);
    t71 = *((unsigned int *)t91);
    t72 = (t68 || t71);
    if (t72 > 0)
        goto LAB56;

LAB57:    memcpy(t109, t88, 8);

LAB58:    t141 = (t109 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t109);
    t145 = (t144 & t143);
    t146 = (t145 != 0);
    if (t146 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB28;

LAB38:    *((unsigned int *)t21) = 1;
    goto LAB41;

LAB40:    t33 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB41;

LAB42:    t35 = (t0 + 3688);
    t38 = (t35 + 56U);
    t44 = *((char **)t38);
    t49 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_signed_not_equal(t36, 32, t44, 32, t49, 32);
    memset(t37, 0, 8);
    t50 = (t36 + 4);
    t17 = *((unsigned int *)t50);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t22 = (t20 & 1U);
    if (t22 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t50) != 0)
        goto LAB47;

LAB48:    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t37);
    t25 = (t23 & t24);
    *((unsigned int *)t45) = t25;
    t59 = (t21 + 4);
    t60 = (t37 + 4);
    t77 = (t45 + 4);
    t26 = *((unsigned int *)t59);
    t29 = *((unsigned int *)t60);
    t30 = (t26 | t29);
    *((unsigned int *)t77) = t30;
    t31 = *((unsigned int *)t77);
    t39 = (t31 != 0);
    if (t39 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t37) = 1;
    goto LAB48;

LAB47:    t51 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB48;

LAB49:    t40 = *((unsigned int *)t45);
    t41 = *((unsigned int *)t77);
    *((unsigned int *)t45) = (t40 | t41);
    t83 = (t21 + 4);
    t87 = (t37 + 4);
    t42 = *((unsigned int *)t21);
    t43 = (~(t42));
    t46 = *((unsigned int *)t83);
    t47 = (~(t46));
    t48 = *((unsigned int *)t37);
    t52 = (~(t48));
    t53 = *((unsigned int *)t87);
    t54 = (~(t53));
    t69 = (t43 & t47);
    t70 = (t52 & t54);
    t55 = (~(t69));
    t56 = (~(t70));
    t57 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t57 & t55);
    t58 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t58 & t56);
    t61 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t61 & t55);
    t62 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t62 & t56);
    goto LAB51;

LAB52:    *((unsigned int *)t88) = 1;
    goto LAB55;

LAB54:    t90 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB55;

LAB56:    t92 = (t0 + 1368U);
    t93 = *((char **)t92);
    t92 = ((char*)((ng1)));
    memset(t94, 0, 8);
    t95 = (t93 + 4);
    t96 = (t92 + 4);
    t73 = *((unsigned int *)t93);
    t74 = *((unsigned int *)t92);
    t75 = (t73 ^ t74);
    t76 = *((unsigned int *)t95);
    t78 = *((unsigned int *)t96);
    t79 = (t76 ^ t78);
    t80 = (t75 | t79);
    t81 = *((unsigned int *)t95);
    t82 = *((unsigned int *)t96);
    t97 = (t81 | t82);
    t98 = (~(t97));
    t99 = (t80 & t98);
    if (t99 != 0)
        goto LAB62;

LAB59:    if (t97 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t94) = 1;

LAB62:    memset(t101, 0, 8);
    t102 = (t94 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t94);
    t106 = (t105 & t104);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t102) != 0)
        goto LAB65;

LAB66:    t110 = *((unsigned int *)t88);
    t111 = *((unsigned int *)t101);
    t112 = (t110 & t111);
    *((unsigned int *)t109) = t112;
    t113 = (t88 + 4);
    t114 = (t101 + 4);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t113);
    t117 = *((unsigned int *)t114);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = *((unsigned int *)t115);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB61:    t100 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t101) = 1;
    goto LAB66;

LAB65:    t108 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB66;

LAB67:    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t109) = (t121 | t122);
    t123 = (t88 + 4);
    t124 = (t101 + 4);
    t125 = *((unsigned int *)t88);
    t126 = (~(t125));
    t127 = *((unsigned int *)t123);
    t128 = (~(t127));
    t129 = *((unsigned int *)t101);
    t130 = (~(t129));
    t131 = *((unsigned int *)t124);
    t132 = (~(t131));
    t133 = (t126 & t128);
    t134 = (t130 & t132);
    t135 = (~(t133));
    t136 = (~(t134));
    t137 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t137 & t135);
    t138 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t138 & t136);
    t139 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t139 & t135);
    t140 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t140 & t136);
    goto LAB69;

LAB70:    t147 = ((char*)((ng2)));
    t148 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t148, t147, 0, 0, 1, 0LL);
    goto LAB72;

}

static void Always_1276_6(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 6888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8032);
    *((int *)t2) = 1;
    t3 = (t0 + 6920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB17;

LAB16:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB11:
LAB7:    goto LAB2;

LAB5:
LAB8:    t11 = ((char*)((ng1)));
    t12 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB7;

LAB9:    t4 = ((char*)((ng2)));
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB11;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB17:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB16;

LAB18:    t27 = ((char*)((ng2)));
    t28 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 32, 0LL);
    goto LAB20;

}

static void Always_1286_7(char *t0)
{
    char t6[8];
    char t30[8];
    char t36[8];
    char t37[8];
    char t45[8];
    char t87[16];
    char t98[8];
    char t99[8];
    char t103[8];
    char t109[8];
    char t141[8];
    char t159[8];
    char t167[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    double t96;
    double t97;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    int t191;
    int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;

LAB0:    t1 = (t0 + 7136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8048);
    *((int *)t2) = 1;
    t3 = (t0 + 7168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB21:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB22;

LAB23:    memcpy(t45, t30, 8);

LAB24:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng1)));
    t29 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB11;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    t28 = (t0 + 4168);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    t35 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t34, 32, t35, 32);
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t38) != 0)
        goto LAB27;

LAB28:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t30 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t37) = 1;
    goto LAB28;

LAB27:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB29:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t30 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t30);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB31;

LAB32:
LAB35:    t83 = (t0 + 2248);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t87, 64, t85, 64, t86, 32);
    t88 = (t87 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB36;

LAB37:
LAB38:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t96 = xsi_vlog_convert_to_real(t4, 64, 2);
    t97 = (t96 < 0.0000000000000000);
    if (t97 == 1)
        goto LAB39;

LAB40:    t96 = (t96 + 0.50000000000000000);
    t96 = ((int64)(t96));

LAB41:    t96 = (t96 * 1.0000000000000000);
    t5 = (t0 + 6944);
    xsi_process_wait(t5, t96);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB36:    t94 = ((char*)((ng1)));
    t95 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t95, t94, 0, 0, 1, 0LL);
    goto LAB38;

LAB39:    t96 = 0.0000000000000000;
    goto LAB41;

LAB42:    t7 = (t0 + 3528);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_not_equal(t6, 32, t21, 32, t22, 32);
    memset(t30, 0, 8);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t28) != 0)
        goto LAB45;

LAB46:    t34 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t34);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB47;

LAB48:    memcpy(t45, t30, 8);

LAB49:    memset(t98, 0, 8);
    t85 = (t45 + 4);
    t63 = *((unsigned int *)t85);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t85) != 0)
        goto LAB59;

LAB60:    t88 = (t98 + 4);
    t68 = *((unsigned int *)t98);
    t71 = *((unsigned int *)t88);
    t72 = (t68 || t71);
    if (t72 > 0)
        goto LAB61;

LAB62:    memcpy(t109, t98, 8);

LAB63:    memset(t141, 0, 8);
    t142 = (t109 + 4);
    t143 = *((unsigned int *)t142);
    t144 = (~(t143));
    t145 = *((unsigned int *)t109);
    t146 = (t145 & t144);
    t147 = (t146 & 1U);
    if (t147 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t142) != 0)
        goto LAB77;

LAB78:    t149 = (t141 + 4);
    t150 = *((unsigned int *)t141);
    t151 = *((unsigned int *)t149);
    t152 = (t150 || t151);
    if (t152 > 0)
        goto LAB79;

LAB80:    memcpy(t167, t141, 8);

LAB81:    t199 = (t167 + 4);
    t200 = *((unsigned int *)t199);
    t201 = (~(t200));
    t202 = *((unsigned int *)t167);
    t203 = (t202 & t201);
    t204 = (t203 != 0);
    if (t204 > 0)
        goto LAB89;

LAB90:
LAB91:    goto LAB34;

LAB43:    *((unsigned int *)t30) = 1;
    goto LAB46;

LAB45:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB46;

LAB47:    t35 = (t0 + 3848);
    t38 = (t35 + 56U);
    t44 = *((char **)t38);
    t49 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_signed_not_equal(t36, 32, t44, 32, t49, 32);
    memset(t37, 0, 8);
    t50 = (t36 + 4);
    t17 = *((unsigned int *)t50);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t50) != 0)
        goto LAB52;

LAB53:    t24 = *((unsigned int *)t30);
    t25 = *((unsigned int *)t37);
    t26 = (t24 & t25);
    *((unsigned int *)t45) = t26;
    t59 = (t30 + 4);
    t60 = (t37 + 4);
    t77 = (t45 + 4);
    t27 = *((unsigned int *)t59);
    t31 = *((unsigned int *)t60);
    t32 = (t27 | t31);
    *((unsigned int *)t77) = t32;
    t33 = *((unsigned int *)t77);
    t39 = (t33 != 0);
    if (t39 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t37) = 1;
    goto LAB53;

LAB52:    t51 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB53;

LAB54:    t40 = *((unsigned int *)t45);
    t41 = *((unsigned int *)t77);
    *((unsigned int *)t45) = (t40 | t41);
    t83 = (t30 + 4);
    t84 = (t37 + 4);
    t42 = *((unsigned int *)t30);
    t43 = (~(t42));
    t46 = *((unsigned int *)t83);
    t47 = (~(t46));
    t48 = *((unsigned int *)t37);
    t52 = (~(t48));
    t53 = *((unsigned int *)t84);
    t54 = (~(t53));
    t69 = (t43 & t47);
    t70 = (t52 & t54);
    t55 = (~(t69));
    t56 = (~(t70));
    t57 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t57 & t55);
    t58 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t58 & t56);
    t61 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t61 & t55);
    t62 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t62 & t56);
    goto LAB56;

LAB57:    *((unsigned int *)t98) = 1;
    goto LAB60;

LAB59:    t86 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB60;

LAB61:    t94 = (t0 + 1368U);
    t95 = *((char **)t94);
    t94 = ((char*)((ng1)));
    memset(t99, 0, 8);
    t100 = (t95 + 4);
    t101 = (t94 + 4);
    t73 = *((unsigned int *)t95);
    t74 = *((unsigned int *)t94);
    t75 = (t73 ^ t74);
    t76 = *((unsigned int *)t100);
    t78 = *((unsigned int *)t101);
    t79 = (t76 ^ t78);
    t80 = (t75 | t79);
    t81 = *((unsigned int *)t100);
    t82 = *((unsigned int *)t101);
    t89 = (t81 | t82);
    t90 = (~(t89));
    t91 = (t80 & t90);
    if (t91 != 0)
        goto LAB67;

LAB64:    if (t89 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t99) = 1;

LAB67:    memset(t103, 0, 8);
    t104 = (t99 + 4);
    t92 = *((unsigned int *)t104);
    t93 = (~(t92));
    t105 = *((unsigned int *)t99);
    t106 = (t105 & t93);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t104) != 0)
        goto LAB70;

LAB71:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t103);
    t112 = (t110 & t111);
    *((unsigned int *)t109) = t112;
    t113 = (t98 + 4);
    t114 = (t103 + 4);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t113);
    t117 = *((unsigned int *)t114);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = *((unsigned int *)t115);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB63;

LAB66:    t102 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t103) = 1;
    goto LAB71;

LAB70:    t108 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB71;

LAB72:    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t109) = (t121 | t122);
    t123 = (t98 + 4);
    t124 = (t103 + 4);
    t125 = *((unsigned int *)t98);
    t126 = (~(t125));
    t127 = *((unsigned int *)t123);
    t128 = (~(t127));
    t129 = *((unsigned int *)t103);
    t130 = (~(t129));
    t131 = *((unsigned int *)t124);
    t132 = (~(t131));
    t133 = (t126 & t128);
    t134 = (t130 & t132);
    t135 = (~(t133));
    t136 = (~(t134));
    t137 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t137 & t135);
    t138 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t138 & t136);
    t139 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t139 & t135);
    t140 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t140 & t136);
    goto LAB74;

LAB75:    *((unsigned int *)t141) = 1;
    goto LAB78;

LAB77:    t148 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB78;

LAB79:    t153 = (t0 + 2248);
    t154 = (t153 + 56U);
    t155 = *((char **)t154);
    t156 = (t0 + 2408);
    t157 = (t156 + 56U);
    t158 = *((char **)t157);
    xsi_vlog_unsigned_leq(t87, 64, t155, 64, t158, 64);
    memset(t159, 0, 8);
    t160 = (t87 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t87);
    t164 = (t163 & t162);
    t165 = (t164 & 1U);
    if (t165 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t160) != 0)
        goto LAB84;

LAB85:    t168 = *((unsigned int *)t141);
    t169 = *((unsigned int *)t159);
    t170 = (t168 & t169);
    *((unsigned int *)t167) = t170;
    t171 = (t141 + 4);
    t172 = (t159 + 4);
    t173 = (t167 + 4);
    t174 = *((unsigned int *)t171);
    t175 = *((unsigned int *)t172);
    t176 = (t174 | t175);
    *((unsigned int *)t173) = t176;
    t177 = *((unsigned int *)t173);
    t178 = (t177 != 0);
    if (t178 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB81;

LAB82:    *((unsigned int *)t159) = 1;
    goto LAB85;

LAB84:    t166 = (t159 + 4);
    *((unsigned int *)t159) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB85;

LAB86:    t179 = *((unsigned int *)t167);
    t180 = *((unsigned int *)t173);
    *((unsigned int *)t167) = (t179 | t180);
    t181 = (t141 + 4);
    t182 = (t159 + 4);
    t183 = *((unsigned int *)t141);
    t184 = (~(t183));
    t185 = *((unsigned int *)t181);
    t186 = (~(t185));
    t187 = *((unsigned int *)t159);
    t188 = (~(t187));
    t189 = *((unsigned int *)t182);
    t190 = (~(t189));
    t191 = (t184 & t186);
    t192 = (t188 & t190);
    t193 = (~(t191));
    t194 = (~(t192));
    t195 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t195 & t193);
    t196 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t196 & t194);
    t197 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t197 & t193);
    t198 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t198 & t194);
    goto LAB88;

LAB89:    t205 = ((char*)((ng2)));
    t206 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t206, t205, 0, 0, 1, 0LL);
    goto LAB91;

}

static void Always_1300_8(char *t0)
{
    char t6[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 7384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8064);
    *((int *)t2) = 1;
    t3 = (t0 + 7416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    t28 = (t0 + 4328);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 4488);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = (t30 + 4);
    t39 = (t33 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB13;

LAB14:
LAB15:    t62 = (t0 + 1768);
    xsi_vlogvar_assign_value(t62, t34, 0, 0, 1);
    goto LAB12;

LAB13:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t30 + 4);
    t49 = (t33 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t30);
    t53 = (t52 & t51);
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t33);
    t57 = (t56 & t55);
    t58 = (~(t53));
    t59 = (~(t57));
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & t58);
    t61 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t61 & t59);
    goto LAB15;

}

static void Always_1309_9(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8080);
    *((int *)t2) = 1;
    t3 = (t0 + 7664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng1)));
    t29 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB11;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:
LAB21:    t21 = ((char*)((ng1)));
    t22 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 32, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB20;

LAB24:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:
LAB29:    t21 = ((char*)((ng2)));
    t22 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB28;

}


extern void unisims_ver_m_11740342327072834795_0225263307_init()
{
	static char *pe[] = {(void *)Initial_1206_0,(void *)Always_1226_1,(void *)Always_1240_2,(void *)Always_1245_3,(void *)Always_1259_4,(void *)Always_1263_5,(void *)Always_1276_6,(void *)Always_1286_7,(void *)Always_1300_8,(void *)Always_1309_9};
	xsi_register_didat("unisims_ver_m_11740342327072834795_0225263307", "isim/top_tb_isim_beh.exe.sim/unisims_ver/m_11740342327072834795_0225263307.didat");
	xsi_register_executes(pe);
}
