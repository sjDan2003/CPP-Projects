#ifndef _NODE_HPP__
#define _NODE_HPP__

class Node {

public:

    /**
     *  Constructor a default Node
     */
    Node();

    /**
     * Constructor a Node with an inital data value
     */
    Node(int newValue);

    /**
     * Destroys a Node
     */
    ~Node();

    /**
     * Sets the data value for this node
     *
     * @param[in] newData The new value that data will be set to
     *
     * @return None
     */
    void SetData(int newData);

    /**
     * Retrieves the data value for the node
     *
     * @return The value in data
     */
    int GetData() const;

    /**
     * Sets the next node pointer
     *
     * @param[in] nextNewNode The node that this node will now point to
     *
     * @return None
     */
    void SetNextNode(Node* newNextNode);

    /**
     * Retrieves the next node
     *
     * @return An address to where the next node is in memory.
     */
    Node *GetNextNode();

private:

    int data; //!< The data value of this node
    Node *nextNode; //!< Pointer to the next node
};

#endif