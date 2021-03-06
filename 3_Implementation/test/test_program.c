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
  TEST_ASSERT_EQUAL(0, compare("10", "10"));
  TEST_ASSERT_EQUAL(1, compare("10", "-20"));
  TEST_ASSERT_EQUAL(0, compare("xxxx","xxxx"));
  TEST_ASSERT_EQUAL(1, compare("xxx","yyy"));
}  
void test_withdraw(void){
   UNITY_TEST_ASSERT_EQUAL_INT(0, withdraw("name", "email","gender",6, "password",100,100),"DFG","DFGHJ");
   UNITY_TEST_ASSERT_EQUAL_INT(0, withdraw("name", "email","gender",6, "password",100,1000),"DFG","DFGHJ");
   UNITY_TEST_ASSERT_EQUAL_INT(900, withdraw("name", "email","gender",6, "password",1000,100),"DFG","DFGHJ");


}
void test_deposit(void){
   UNITY_TEST_ASSERT_EQUAL_INT(200, deposit("name", "email","gender",6, "password",100,100),"DFG","DFGHJ");
   UNITY_TEST_ASSERT_EQUAL_INT(1100, deposit("name", "email","gender",6, "password",100,1000),"DFG","DFGHJ");
}

