#include <iostream>
#include "LinkedList/LinkedList.hpp"

int main() {

    std::cout << "Hello World\n";
    Node *rootNode = new Node();
    rootNode->SetData(5);
    std::cout << "The data is " << rootNode->GetData() << "\n";
    delete rootNode;
    return 0;
}