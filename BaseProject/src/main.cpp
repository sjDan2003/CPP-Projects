#include <iostream>
#include "LinkedList/LinkedList.hpp"

int main() {

    LinkedList newList;
    if (newList.IsEmpty()) {

        std::cout << "List is empty\n";

    } else {

        std::cout << "List is not empty\n";
    }

    return 0;
}