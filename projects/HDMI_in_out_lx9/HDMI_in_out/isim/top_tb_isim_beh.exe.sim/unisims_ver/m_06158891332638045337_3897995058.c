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
static const char *ng2 = " Warning : Input clock period of %1.3f ns, on the %s port of instance %m exceeds allowed value of %1.3f ns at time %1.3f ns.";



static void Initial_1176_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 1880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB1:    return;
}

static void Always_1181_1(char *t0)
{
    char t4[16];
    char t7[16];
    char t16[8];
    char t43[8];
    char t49[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    double t41;
    double t42;
    char *t44;
    char *t45;
    char *t46;
    double t47;
    double t48;
    double t50;
    double t51;

LAB0:    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3520);
    *((int *)t2) = 1;
    t3 = (t0 + 3232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 64, 0LL);
    t2 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 1880);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_unsigned_minus(t7, 64, t4, 64, t6, 64);
    t8 = (t0 + 2040);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 608);
    t8 = *((char **)t6);
    xsi_vlog_unsigned_greater(t4, 64, t5, 64, t8, 32);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:
LAB9:    t14 = (t0 + 1480U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t15 + 4);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t14);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB13;

LAB10:    if (t28 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t16) = 1;

LAB13:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB8;

LAB12:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t38 = (t0 + 2040);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = xsi_vlog_convert_to_real(t40, 64, 2);
    t42 = (t41 / 1000.0000000000000);
    *((double *)t43) = t42;
    t44 = (t0 + 472);
    t45 = *((char **)t44);
    t44 = (t0 + 608);
    t46 = *((char **)t44);
    t47 = xsi_vlog_convert_to_real(t46, 32, 1);
    t48 = (t47 / 1000.0000000000000);
    *((double *)t49) = t48;
    t44 = xsi_vlog_time(t7, 1.0000000000000000, 1.0000000000000000);
    t50 = xsi_vlog_convert_to_real(t7, 64, 2);
    t51 = (t50 / 1000.0000000000000);
    *((double *)t52) = t51;
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t0, (char)114, t43, 64, (char)118, t45, 40, (char)114, t49, 64, (char)114, t52, 64);
    goto LAB16;

}


extern void unisims_ver_m_06158891332638045337_3897995058_init()
{
	static char *pe[] = {(void *)Initial_1176_0,(void *)Always_1181_1};
	xsi_register_didat("unisims_ver_m_06158891332638045337_3897995058", "isim/top_tb_isim_beh.exe.sim/unisims_ver/m_06158891332638045337_3897995058.didat");
	xsi_register_executes(pe);
}
