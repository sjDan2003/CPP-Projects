#ifndef __LINKED_LIST_HPP
#define __LINKED_LIST_HPP

#include "Node.hpp"

class LinkedList {

public:

    /**
     * Constructs a Linked List
     */
    LinkedList();

    /**
     * Destroys a Linked List
     */
    ~LinkedList();

    /**
     * Checks if the list is empty
     *
     * @return True if the list is empty
     *         False if there is data in the list
     */
    bool IsEmpty();

    /**
     * Adds a new item to the end of the list
     *
     * @param[in] newValue The new value to append to the list
     *
     * @return None
     */
    void AppendToList(int newValue);

    /**
     * Deletes an item from the list
     * If the item is not in the list, then this function
     * won't do anything.
     *
     * @param[in] deleteValue The value to be deleted from the list
     *
     * @return None
     */
    void DeleteItem(int deleteValue);

    /**
     * Informs the caller that an item is in the list
     *
     * @param[in] searchValue The value to search for in the list
     *
     * @return True if the value is in the list
     *         False if the value is not in the list
     */
    bool Search(int searchValue);

private:

    Node *rootNode; //!< The root node of the list that points to the first node of the list.
};

#endif