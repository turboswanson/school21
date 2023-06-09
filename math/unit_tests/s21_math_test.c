#include "s21_math_test.h"

void run_test(void) {
  Suite *list[] = {suite_fabs(),  suite_abs(),  suite_fmod(), suite_ceil(),
                   suite_floor(), suite_exp(),  suite_log(),  suite_pow(),
                   suite_sqrt(),  suite_sin(),  suite_cos(),  suite_tan(),
                   suite_atan(),  suite_acos(), suite_asin(), NULL};

  int count = 1;

  for (Suite **current_testcase = list; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase, count);
    count++;
  }
}

void run_testcase(Suite *testcase, int count) {
  printf("\n%s%d\n", "CURRENT TEST: ", count);

  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

int main() {
  run_test();

  return 0;
}