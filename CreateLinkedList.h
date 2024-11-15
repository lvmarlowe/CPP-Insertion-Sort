/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 3: Assignment
    14 Sept 2024
    This header file defines the CreateLinkedList class,
    which is responsible for creating andmanaging a linked
    list of doubles with predefined values. It requires
    friend classes of ProgramManager and SortedLinkedList 
    to run.
-------------------------------------------------- */

#ifndef CREATELINKEDLIST_H
#define CREATELINKEDLIST_H

using namespace std;

// Forward declarations
class ProgramManager;
class SortLinkedList;

class CreateLinkedList {

    // Allows other classes to access
    friend class ProgramManager;
    friend class SortLinkedList;

public:
    CreateLinkedList(); // Default constructor
    virtual ~CreateLinkedList(); // Virtual destructor
    void push(double value);
    void print() const;
    void initializeWithValues();

private:
    struct Node {
        double data;
        Node* next;
        Node(double val) : data(val), next(nullptr) {}
    };

    Node* head; // Pointer to the head node of the list
    void clear();

    // Getter for the head node
    Node* getHeadNode() const {
        return head;
    }
};

#endif // CREATELINKEDLIST_H
