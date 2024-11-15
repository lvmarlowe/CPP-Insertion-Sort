/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 3: Assignment
    14 Sept 2024
    This header file defines the ProgramManager class,
    which manages the creation and sorting of the linked
    list. It requires CreateLinkedList.h and 
    SortLinkedList.h to run.
-------------------------------------------------- */

#ifndef PROGRAMMANAGER_H
#define PROGRAMMANAGER_H

#include "CreateLinkedList.h"
#include "SortLinkedList.h"

using namespace std;

// Forward declarations
class CreateLinkedList;
class SortLinkedList;

class ProgramManager {

    // Allows other classes to access
    friend class CreateLinkedList;
    friend class SortLinkedList;

public:
    ProgramManager(); // Default constructor
    virtual ~ProgramManager(); // Virtual destructor
    void run();

private:
    CreateLinkedList* linkedList; // Pointer to the list
    SortLinkedList* sorter; // Pointer to the sorter class
    void performOperations();
};

#endif // PROGRAMMANAGER_H
