#include "CppUTest/TestHarness.h"
#include "../src/LinkedList/Node.hpp"
TEST_GROUP(NodeTestGroup) {
};

TEST(NodeTestGroup, DefaultConstructorTest) {

  Node *newNode = new Node();
  CHECK_EQUAL(0, newNode->GetData());
  CHECK_TRUE(newNode->GetNextNode() == nullptr);
  delete newNode;
}

TEST(NodeTestGroup, NewValueConstructorTest) {

  int newValue = 5;
  Node *newNode = new Node(newValue);
  CHECK_EQUAL(newValue, newNode->GetData());
  CHECK_TRUE(newNode->GetNextNode() == nullptr);
  delete newNode;
}

TEST(NodeTestGroup, SetDataTest) {

  int newValue = 5;
  Node *newNode = new Node();
  newNode->SetData(newValue);
  CHECK_EQUAL(newValue, newNode->GetData());
  delete newNode;
}

TEST(NodeTestGroup, SetNextNodeTest) {

  int testValue = 5;
  Node *rootNode = new Node();
  Node *nextNode = new Node(testValue);
  rootNode->SetNextNode(nextNode);

  // Check to make sure that root node now points to the next node
  // and not nullptr anymore.
  CHECK_FALSE(rootNode->GetNextNode() == nullptr);

  // Check to make sure that root node's next node contains
  // the expected data.
  CHECK_EQUAL(testValue, rootNode->GetNextNode()->GetData());
  delete nextNode;
  delete rootNode;
}