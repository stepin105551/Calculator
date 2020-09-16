#include "unity.h"
#include "Calculator_header.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_input1(void)
{
    int arr1[2] = {4, 2};
    int arr2[2] = {6, 2};
    TEST_ASSERT_EQUAL_INT_ARRAY(arr2, calculate(arr1), 2);
}

void test_input2(void)
{
    int arr1[2] = {25, 10};
    int arr2[2] = {35, 15};
    TEST_ASSERT_EQUAL_INT_ARRAY(arr2, calculate(arr1), 2);
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_input1);
  RUN_TEST(test_input2);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
