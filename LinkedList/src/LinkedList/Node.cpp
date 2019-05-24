
#include "Node.hpp"
#include <iostream>

Node::Node() {

    data = 0;
    nextNode = nullptr;
}

Node::Node(int newValue) {

    data = newValue;
    nextNode = nullptr;
}

Node::~Node() {

    std::cout << "Destroying Node\n";
}

void Node::SetData(int newData) {

    data = newData;
}

int Node::GetData() const {

    return data;
}

void Node::SetNextNode(Node* newNextNode) {

    nextNode = newNextNode;
}

Node *Node::GetNextNode() {

    return nextNode;
}