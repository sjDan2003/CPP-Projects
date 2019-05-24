#include "CppUTest/TestHarness.h"
#include "../src/LinkedList/LinkedList.hpp"
TEST_GROUP(LinkedListTestGroup) {
};

TEST(LinkedListTestGroup, DefaultConstructorTest) {

  LinkedList newList;
  CHECK_TRUE(newList.IsEmpty());
}