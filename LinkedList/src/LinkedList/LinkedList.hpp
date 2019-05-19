#ifndef _LINKED_LIST_HPP__
#define _LINKED_LIST_HPP__

class Node {

public:

    /**
     * Constructor function for Node
     */
    Node();

    /**
     * Destructor function for Node
     */
    ~Node();

    void SetData(int newData);
    int GetData() const;

    void SetNextNode(Node* newNextNode);
    Node *GetNextNode();
private:

    int data;
    Node *nextNode;
};

#endif