#include "CppUTest/TestHarness.h"
#include "../src/LinkedList/LinkedList.hpp"
TEST_GROUP(NodeTestGroup) {
};

TEST(NodeTestGroup, ConstructorTest) {

  Node *newNode = new Node();
  CHECK_EQUAL(0, newNode->GetData());
  delete newNode;
}