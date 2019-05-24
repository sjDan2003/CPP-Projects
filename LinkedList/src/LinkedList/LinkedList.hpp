#ifndef __LINKED_LIST_HPP
#define __LINKED_LIST_HPP

#include "Node.hpp"

class LinkedList {

public:
    LinkedList();
    ~LinkedList();
    bool IsEmpty();
    void AppendToList(int newValue);
    void DeleteItem(int deleteValue);
    bool Search(int searchValue);
private:
    Node *rootNode;
};

#endif