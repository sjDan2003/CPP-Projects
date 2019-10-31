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

    // If a list is empty then its root node will point
    // to nothing.
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

    bool found = false;

    // If the root node points to null, then the searchValue isn't in the list
    // Otherwise itterate through the list until either the end has been reached
    // or until the searchValue has been found.
    if (rootNode != nullptr) {

        Node *currNode = rootNode;

        while ((found == false) && (currNode != nullptr)) {

            if (currNode->GetData() == searchValue) {

                found = true;

            } else {

                currNode = currNode->GetNextNode();
            }
        }
    }

    return found;
}

void LinkedList::DeleteItem(int deleteValue) {

    bool found = false;

    // If the root node points to Null, then there is nothing to delete
    // Otherwise iterate through the list until either the end of the list
    // or until deleteValue has been found.
    if (rootNode != nullptr) {

        // Previous node will point to one node behind the current node
        Node *currNode = rootNode;
        Node *prevNode = nullptr;

        while ((found == false) && (currNode != nullptr)) {

            if (currNode->GetData() == deleteValue) {

                found = true;

                // If the deleteValue has been found, and it is at the root node
                // check to see if root node points to null.
                // If it does then just delete the root node and have it point to null.
                // Otherwise have the root node point to the next node in the list.
                if (currNode == rootNode) {

                    if (rootNode->GetNextNode() == nullptr) {

                        delete rootNode;
                        rootNode = nullptr;

                    } else {

                        rootNode = rootNode->GetNextNode();
                        delete currNode;
                    }

                } else {

                    // If the deleteValue has been found and it's somewhere in the middle or end
                    // of the list, have the previous node point to current node's next node.
                    // Once this new link has been established the node that current node points
                    // to can be deleted.
                    // This works for the end of the list since current node's next node points to null
                    // so previous node will also point to null.
                    prevNode->SetNextNode(currNode->GetNextNode());
                    delete currNode;
                }
            } else {

                prevNode = currNode;
                currNode = currNode->GetNextNode();
            }

        }
    }
}

