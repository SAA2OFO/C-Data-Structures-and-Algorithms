#include "unity.h"
#include "sum.h"

void setUp(void) {}
void tearDown(void) {}

void test_sum_of_two_positive_numbers(void) {
    TEST_ASSERT_EQUAL_INT(30, sum(10, 20));
}

void test_sum_with_negative_number(void) {
    TEST_ASSERT_EQUAL_INT(5, sum(10, -5));
}

void test_sum_with_zero(void) {
    TEST_ASSERT_EQUAL_INT(42, sum(42, 0));
}
