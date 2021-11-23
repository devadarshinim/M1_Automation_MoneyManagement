#include "unity.h"
#include <program.h>

#include <program.h>
#define PROJECT_NAME    "M1_AUTOMATION_MONEYMANAGEMENT"

void test_compare(void);
void test_withdraw(void);
void test_deposit(void);

void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_compare);
  RUN_TEST(test_withdraw);
  RUN_TEST(test_deposit);
  return UNITY_END();
}
 
void test_compare(void) {
  TEST_ASSERT_EQUAL(0, compare(10, 10));
  TEST_ASSERT_EQUAL(1, compare(10, -20));
  TEST_ASSERT_EQUAL(0, compare("xxx","xxx"));
  TEST_ASSERT_EQUAL(1, compare("xxx","yyy"));
}  
void test_withdraw(void) {
  TEST_ASSERT_EQUAL(90,  withdraw("name", "email","gender", age, "password",100,10));
  TEST_ASSERT_EQUAL(0, withdraw("name", "email","gender", age, "password",100,1000));
}

void test_deposit(void) {
  TEST_ASSERT_EQUAL(1100, deposit("name", "email","gender", age, "password",100,1000));

}