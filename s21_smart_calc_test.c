#include <check.h>

#include "calc_func.h"

START_TEST(s21_test_0) {
  double x = 0;
  double orig = 10;

  char str[255] = "5+5";
  eval_expr(str, &x);
  ck_assert_double_eq(x, orig);
}
END_TEST

START_TEST(s21_test_0_1) {
  double x = 0;
  double orig = 25;

  char str[255] = "5^2";
  eval_expr(str, &x);
  ck_assert_double_eq(x, orig);
}
END_TEST

START_TEST(s21_test_0_2) {
  double x = 0;
  double orig = 1;

  char str[255] = "10mod3";
  eval_expr(str, &x);
  ck_assert_double_eq(x, orig);
}
END_TEST

START_TEST(s21_test_0_3) {
  double x = 0;
  double orig = -6.79971145522038;

  char str[255] = "tan(8)";
  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_0_4) {
  double x = 0;
  double orig = 0.903089986991944;

  char str[255] = "log(8)";
  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_0_5) {
  double x = 0;
  double orig = 0.903089986991944;

  char str[255] = "log(8)";
  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_0_6) {
  double x = 0;
  double orig = 2.07944154167984;

  char str[255] = "ln(8)";
  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_0_7) {
  double x = 0;
  double orig = 5;

  char str[255] = "sqrt(25)";
  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_0_8) {
  double x = 0;
  double orig = 1.53081763967161;

  char str[255] = "atan(25)";
  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_0_9) {
  double x = 0;

  char str[255] = "asin(25)";
  eval_expr(str, &x);
  ck_assert_double_nan(x);
}
END_TEST

START_TEST(s21_test_0_10) {
  double x = 0;
  double orig = 1.36943840600457;

  char str[255] = "acos(0.2)";
  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_1) {
  double x = 0;
  double orig = 162;
  // int error = 0;

  char str[255] = "4*5*2*2*2+2";
  eval_expr(str, &x);
  ck_assert_double_eq(x, orig);
}
END_TEST

START_TEST(s21_test_2) {
  double x = 0;
  double orig = 20;
  // int error = 0;

  char str[255] = "150/10+5*2/2";
  eval_expr(str, &x);
  ck_assert_double_eq(x, orig);
}
END_TEST

START_TEST(s21_test_3) {
  double x = 0;
  double orig = 9;
  // int error = 0;

  char str[255] = "5+5-2*3/6";
  eval_expr(str, &x);
  ck_assert_double_eq(x, orig);
}
END_TEST

START_TEST(s21_test_4) {
  double x = 0;
  double orig = 69;
  // int error = 0;

  char str[255] = "2+(5*5*5+5+2*2)/(2)";

  eval_expr(str, &x);
  ck_assert_double_eq(x, orig);
}
END_TEST

START_TEST(s21_test_5) {
  double x = 0;
  double orig = 11.958851;
  // int error = 0;

  char str[255] = "5+(3+sin(8/2-3.5))*2";

  eval_expr(str, &x);
  ck_assert_double_eq_tol(x, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_6) {
  double x = 0.0;
  char str[255] = "24*4-3*2";
  double orig = 90;
  eval_expr(str, &x);

  ck_assert_int_eq(x, orig);
}
END_TEST

START_TEST(s21_test_7) {
  double orig = 4;
  char str[255] = "2-(-2)";
  double x = 0.0;
  eval_expr(str, &x);

  ck_assert_int_eq(x, orig);
}
END_TEST

START_TEST(s21_test_8) {
  double orig = -0.41211848524;
  char str[255] = "-sin(9)";
  double x = 0.0;
  eval_expr(str, &x);

  ck_assert_int_eq(x, orig);
}
END_TEST

START_TEST(s21_test_8_1) {
  double orig = -0.41211848524;
  char str[255] = "-sin(9)";
  double x = 0.0;
  eval_expr(str, &x);

  ck_assert_int_eq(x, orig);
}
END_TEST

START_TEST(s21_test_9) {
  double orig = 2.41211848524;
  char str[255] = "sin(9)-(-2)";
  double x = 0.0;
  eval_expr(str, &x);

  ck_assert_int_eq(x, orig);
}
END_TEST
START_TEST(s21_test_10) {
  double orig = 0.91113026188;
  char str[255] = "-cos(9)";
  double x = 0.0;
  eval_expr(str, &x);

  ck_assert_int_eq(x, orig);
}
END_TEST

Suite *suite_smart_calc(void) {
  Suite *s = suite_create("suite_smart_calc");
  TCase *tc = tcase_create("suite_smart_calc");

  tcase_add_test(tc, s21_test_0);
  tcase_add_test(tc, s21_test_0_1);
  tcase_add_test(tc, s21_test_0_2);
  tcase_add_test(tc, s21_test_0_3);
  tcase_add_test(tc, s21_test_0_4);
  tcase_add_test(tc, s21_test_0_5);
  tcase_add_test(tc, s21_test_0_6);
  tcase_add_test(tc, s21_test_0_7);
  tcase_add_test(tc, s21_test_0_8);
  tcase_add_test(tc, s21_test_0_9);
  tcase_add_test(tc, s21_test_0_10);
  tcase_add_test(tc, s21_test_1);
  tcase_add_test(tc, s21_test_2);
  tcase_add_test(tc, s21_test_3);
  tcase_add_test(tc, s21_test_4);
  tcase_add_test(tc, s21_test_5);
  tcase_add_test(tc, s21_test_6);
  tcase_add_test(tc, s21_test_7);
  tcase_add_test(tc, s21_test_8);
  tcase_add_test(tc, s21_test_8_1);
  tcase_add_test(tc, s21_test_9);
  tcase_add_test(tc, s21_test_10);

  suite_add_tcase(s, tc);
  return s;
}

int main() {
  Suite *smart_calc = suite_smart_calc();
  SRunner *smart_calc_runner = srunner_create(smart_calc);
  float number_failed;
  srunner_run_all(smart_calc_runner, CK_ENV);
  number_failed = srunner_ntests_failed(smart_calc_runner);
  srunner_free(smart_calc_runner);

  return number_failed == 0 ? 0 : 1;
}