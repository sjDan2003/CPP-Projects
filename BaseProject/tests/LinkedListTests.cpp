#include "CppUTest/TestHarness.h"
#include "../src/LinkedList/LinkedList.hpp"
TEST_GROUP(LinkedListTestGroup) {
};

TEST(LinkedListTestGroup, DefaultConstructorTest) {

  LinkedList newList;
  CHECK_TRUE(newList.IsEmpty());
}

TEST(LinkedListTestGroup, IsEmptyTest) {

  LinkedList newList;
  CHECK_TRUE(newList.IsEmpty());

  int testValue = 5;
  newList.AppendToList(testValue);
  CHECK_FALSE(newList.IsEmpty());
}

TEST(LinkedListTestGroup, AppendTest) {

  LinkedList newList;
  int testValue = 5;
  CHECK_FALSE(newList.Search(testValue));
  newList.AppendToList(testValue);
  CHECK_TRUE(newList.Search(testValue));
}

TEST(LinkedListTestGroup, DeleteFromListTest) {

  LinkedList newList;
  int testValue1 = 5;
  int testValue2 = 6;

  // Check the scenario when only one item is in the list
  newList.AppendToList(testValue1);
  newList.DeleteItem(testValue1);
  CHECK_FALSE(newList.Search(testValue1));

  // Check the scenario when two items are in the list and
  // the value to be deleted is at index 1
  newList.AppendToList(testValue1);
  newList.AppendToList(testValue2);
  newList.DeleteItem(testValue2);
  CHECK_FALSE(newList.Search(testValue2));
  CHECK_TRUE(newList.Search(testValue1));
  newList.DeleteItem(testValue1);
  CHECK_TRUE(newList.IsEmpty());

  // Check the scenario when two items are in the list and
  // the value to be deleted is at the root node.
  newList.AppendToList(testValue1);
  newList.AppendToList(testValue2);
  newList.DeleteItem(testValue1);
  CHECK_FALSE(newList.Search(testValue1));
  CHECK_TRUE(newList.Search(testValue2));
  newList.DeleteItem(testValue2);
  CHECK_TRUE(newList.IsEmpty());
}