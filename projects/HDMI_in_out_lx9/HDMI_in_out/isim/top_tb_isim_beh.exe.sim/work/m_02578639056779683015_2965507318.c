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
static const char *ng0 = "/home/hardwarer/Hello1/top.v";
static unsigned int ng1[] = {9U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Always_108_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 7600);
    *((int *)t2) = 1;
    t3 = (t0 + 6072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB8;

LAB5:    if (t20 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB8:    t24 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t24, t8, 0, 0, 1, 0LL);
    goto LAB2;

LAB7:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB8;

}

static void Always_110_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t26[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;

LAB0:    t1 = (t0 + 6288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7616);
    *((int *)t2) = 1;
    t3 = (t0 + 6320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(112, ng0);
    t6 = (t0 + 5128);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t9) != 0)
        goto LAB8;

LAB9:    t16 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB10;

LAB11:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t16) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t26, 8);

LAB18:    t37 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t37, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t7) != 0)
        goto LAB21;

LAB22:    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB23;

LAB24:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t9) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t5) > 0)
        goto LAB29;

LAB30:    memcpy(t4, t26, 8);

LAB31:    t29 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t7) != 0)
        goto LAB34;

LAB35:    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB36;

LAB37:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t9) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t5) > 0)
        goto LAB42;

LAB43:    memcpy(t4, t26, 8);

LAB44:    t29 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t26, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t17 = (t13 ^ t14);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t19 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB48;

LAB45:    if (t23 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t26) = 1;

LAB48:    memset(t5, 0, 8);
    t16 = (t26 + 4);
    t31 = *((unsigned int *)t16);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t16) != 0)
        goto LAB51;

LAB52:    t21 = (t5 + 4);
    t36 = *((unsigned int *)t5);
    t38 = *((unsigned int *)t21);
    t39 = (t36 || t38);
    if (t39 > 0)
        goto LAB53;

LAB54:    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t21);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t21) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t5) > 0)
        goto LAB59;

LAB60:    memcpy(t4, t44, 8);

LAB61:    t45 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t45, t4, 0, 0, 4, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 2808U);
    t21 = *((char **)t20);
    goto LAB11;

LAB12:    t20 = (t0 + 4648);
    t27 = (t20 + 56U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t29 = (t26 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 1);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 1);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 511U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 511U);
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 10, t21, 10, t26, 10);
    goto LAB18;

LAB16:    memcpy(t4, t21, 8);
    goto LAB18;

LAB19:    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB21:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB22;

LAB23:    t15 = (t0 + 2968U);
    t16 = *((char **)t15);
    goto LAB24;

LAB25:    t15 = (t0 + 4808);
    t20 = (t15 + 56U);
    t21 = *((char **)t20);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t21 + 4);
    t31 = *((unsigned int *)t21);
    t32 = (t31 >> 1);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 1);
    *((unsigned int *)t27) = t34;
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 511U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 511U);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t4, 10, t16, 10, t26, 10);
    goto LAB31;

LAB29:    memcpy(t4, t16, 8);
    goto LAB31;

LAB32:    *((unsigned int *)t5) = 1;
    goto LAB35;

LAB34:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB35;

LAB36:    t15 = (t0 + 3128U);
    t16 = *((char **)t15);
    goto LAB37;

LAB38:    t15 = (t0 + 4968);
    t20 = (t15 + 56U);
    t21 = *((char **)t20);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t21 + 4);
    t31 = *((unsigned int *)t21);
    t32 = (t31 >> 1);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 1);
    *((unsigned int *)t27) = t34;
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 511U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 511U);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t4, 10, t16, 10, t26, 10);
    goto LAB44;

LAB42:    memcpy(t4, t16, 8);
    goto LAB44;

LAB47:    t15 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t5) = 1;
    goto LAB52;

LAB51:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB52;

LAB53:    t27 = ((char*)((ng2)));
    goto LAB54;

LAB55:    t28 = (t0 + 4488);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t37 = ((char*)((ng3)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 4, t30, 4, t37, 4);
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t4, 4, t27, 4, t44, 4);
    goto LAB61;

LAB59:    memcpy(t4, t27, 8);
    goto LAB61;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 7712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 7776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 2, 2, 2U, t5, 1, t4, 1);
    t2 = (t0 + 7840);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 1);
    t18 = (t0 + 7632);
    *((int *)t18) = 1;

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 7904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_02578639056779683015_2965507318_init()
{
	static char *pe[] = {(void *)Always_108_0,(void *)Always_110_1,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute};
	xsi_register_didat("work_m_02578639056779683015_2965507318", "isim/top_tb_isim_beh.exe.sim/work/m_02578639056779683015_2965507318.didat");
	xsi_register_executes(pe);
}
