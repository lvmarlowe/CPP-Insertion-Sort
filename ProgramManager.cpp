/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 3: Assignment
    14 Sept 2024
    This source file implements the methods of the
    ProgramManager class, including managing create
    and sort operations. It requires ProgramManager.h 
    to run.
-------------------------------------------------- */

#include "ProgramManager.h"
#include <iostream>

using namespace std;

// Default constructor initializes linkedList and sorter objects
ProgramManager::ProgramManager()
    : linkedList(new CreateLinkedList()),
    sorter(new SortLinkedList(linkedList))
{}

// Virtual destructor cleans up allocated resources
ProgramManager::~ProgramManager() {
    delete linkedList;
    delete sorter;
}

// Method prints the initial list, sorts it, and displays the result
void ProgramManager::performOperations() {

    cout << "****************************" << endl;
    cout << "Initial linked list:" << endl;
    linkedList->print();
    cout << "****************************" << endl;

    sorter->sort();

    cout << "Sorted linked list:" << endl;
    linkedList->print();
    cout << "****************************" << endl;
}

// Method runs the program
void ProgramManager::run() {
    performOperations();
}
