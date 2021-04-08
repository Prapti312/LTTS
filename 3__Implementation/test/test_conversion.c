#include "unity.h"
#include "unity_internals.h"
#include "conversion.h"
#include <string.h>

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_B_to_D(void)
{
  TEST_ASSERT_EQUAL(4,Binary_to_Decimal(100));
}

void test_B_to_O(void)
{
    TEST_ASSERT_EQUAL(10,Binary_to_Octal(1000));
}

void test_B_to_H(void)
{
    strcmp("10",Binary_to_Hexadecimal(10000));
}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_B_to_D);
  RUN_TEST(test_B_to_O);
  RUN_TEST(test_B_to_H);

  /* Close the Unity Test Framework */
  return UNITY_END();
}