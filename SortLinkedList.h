/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 3: Assignment
    14 Sept 2024
    This header file defines the SortLinkedList class,
    which sorts a linked list using insertion sort.
    It requires CreatedLinkedList.h to run.
-------------------------------------------------- */

#ifndef SORTLINKEDLIST_H
#define SORTLINKEDLIST_H

#include "CreateLinkedList.h"

using namespace std;

class ProgramManager; // Forward declaration

class SortLinkedList {

    // Allows ProgramManager to access
    friend class ProgramManager;

public:
    SortLinkedList(); // Default constructor
    virtual ~SortLinkedList(); // Virtual destructor
    explicit SortLinkedList(CreateLinkedList* list); 

protected:
    void sort();

private:
    CreateLinkedList* list; // Pointer to the list
    CreateLinkedList::Node* insertionSort(CreateLinkedList::Node* head);
    void sortedInsert(CreateLinkedList::Node*& sortedHead, CreateLinkedList::Node* newNode);
};

#endif // SORTLINKEDLIST_H
