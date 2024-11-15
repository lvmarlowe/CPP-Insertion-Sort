/*  LV Marlowe
    SDEV-345: Data Structures & Algorithms
    Week 3: Assignment
    14 Sept 2024
    This source file implements the methods of the
    SortLinkedList class, including the insertion
    sort method. It requires SortLinkedList.h to run.
    It is based on code from:
    https://www.geeksforgeeks.org/cpp-program-for-insertion-sort-in-a-singly-linked-list/
 -------------------------------------------------- */

#include "SortLinkedList.h"
#include <iostream>

using namespace std;

// Default constructor
SortLinkedList::SortLinkedList() : list(nullptr) {}

// Virtual destructor
SortLinkedList::~SortLinkedList() {}

// Constructor initializes with the list
SortLinkedList::SortLinkedList(CreateLinkedList* list) : list(list) {}

// Method sorts the list using insertion sort
void SortLinkedList::sort() {

    if (list && list->getHeadNode()) {
        CreateLinkedList::Node* sortedHead = insertionSort(list->getHeadNode());
        list->head = sortedHead;
    }
}

// Function performs insertion sort on the list and returns new head
CreateLinkedList::Node* SortLinkedList::insertionSort(CreateLinkedList::Node* head) {
    CreateLinkedList::Node* sorted = nullptr;
    CreateLinkedList::Node* current = head;

    // Traverses the list and inserts every node to sort
    while (current != nullptr) {

        // Stores next for the next iteration
        CreateLinkedList::Node* next = current->next;

        // Inserts current into the sorted list
        sortedInsert(sorted, current);

        // Updates current
        current = next;
    }

    return sorted;
}

// Method inserts a new node into the sorted list
void SortLinkedList::sortedInsert(CreateLinkedList::Node*& sortedHead, CreateLinkedList::Node* newNode) {
    if (sortedHead == nullptr || sortedHead->data >= newNode->data) {
        newNode->next = sortedHead;
        sortedHead = newNode;
    }
    else {
        CreateLinkedList::Node* current = sortedHead;

        // Locates node before the point of insertion
        while (current->next != nullptr && current->next->data < newNode->data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}
