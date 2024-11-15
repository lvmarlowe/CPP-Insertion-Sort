/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 3: Assignment
    14 Sept 2024
    This source file implements the methods of the
    CreateLinkedList class. It requires CreateLinkedList.h
    to run. It is based on code from:
    https://www.geeksforgeeks.org/cpp-program-for-insertion-sort-in-a-singly-linked-list/.
 -------------------------------------------------- */

#include "CreateLinkedList.h"
#include <iostream>

using namespace std;

// Constructor intitializes the list and fills it with default values
CreateLinkedList::CreateLinkedList() : head(nullptr) {
    initializeWithValues();
}


// Virtual destructor ensures all nodes are deleted to prevent memory leaks
CreateLinkedList::~CreateLinkedList() {
    clear();
}

// Method initializes the list with predefined values
void CreateLinkedList::initializeWithValues() {
    double initialValues[] = { 23, 54, 2, 8, 3.2, 14, 0, 9, 2 };
    for (double value : initialValues) {
        push(value);
    }
}

// Method adds new node with predefined value to the beginning of the list
void CreateLinkedList::push(double value) {
    Node* newNode = new Node(value);

    // Links the old list of the new node
    newNode->next = head;

    // Moves the head to the new node
    head = newNode;
}

// Function clears the list
void CreateLinkedList::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

// Method prints the list
void CreateLinkedList::print() const {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}