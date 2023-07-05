#ifndef S21_MATH_TEST_H
#define S21_MATH_TEST_H

#include "../s21_math.h"
#include <check.h>
#include <stdlib.h>
#include <limits.h>


Suite *suite_abs(void);
Suite *suite_fabs(void);
Suite *suite_fmod(void);
Suite *suite_ceil(void);
Suite *suite_floor(void);
Suite *suite_exp(void);

void run_test(void);
void run_testcase(Suite *testcase,int count);

#endif