#include "LinkedList.hpp"

LinkedList::LinkedList() {

    rootNode = nullptr;
}

LinkedList::~LinkedList() {

    while (rootNode != nullptr) {

        Node *tempNode = rootNode;
        rootNode = rootNode->GetNextNode();
        delete tempNode;
    }
}

bool LinkedList::IsEmpty() {

    if (rootNode == nullptr) {

        return true;

    } else {

        return false;
    }
}

void LinkedList::AppendToList(int newValue) {

    Node *newNode = new Node(newValue);

    // If the list is empty, simply make the root node equal to
    // the root node.
    // Otherwise search for the end of the list and append the new
    // node to the end.
    if (IsEmpty() == true) {

        rootNode = newNode;

    } else {

        Node *currNode = rootNode;
        while (currNode->GetNextNode() != nullptr) {
            currNode = currNode->GetNextNode();
        }

        currNode->SetNextNode(newNode);
    }

}

bool LinkedList::Search(int searchValue) {

   Node *currNode = rootNode;
   bool found = false;
   while ((found == false) && (currNode->GetNextNode() != nullptr)) {

       if (currNode->GetData() == searchValue) {

           found = true;

       } else {

           currNode = currNode->GetNextNode();
       }
   }

   return found;
}

void LinkedList::DeleteItem(int deleteValue) {

    Node *currNode = rootNode;
    Node *prevNode = nullptr;
    bool found = false;
    while ((found == false) && (currNode->GetNextNode() != nullptr)) {

        if (currNode->GetData() == deleteValue) {

            found = true;
            if (currNode == rootNode) {

                delete currNode;
                rootNode = nullptr;

            } else {

                prevNode->SetNextNode(currNode->GetNextNode());
                delete currNode;
            }
        } else {

            prevNode = currNode;
            currNode = currNode->GetNextNode();
        }

    }
}

