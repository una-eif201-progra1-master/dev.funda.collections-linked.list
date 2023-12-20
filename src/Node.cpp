//
// Created by Maikol Guzman on 19/12/23.
//

#include "Node.h"
#include <iostream>
/*!
 * \brief insertOption inserts a new option at the beginning of the linked list.
 * \param head is the head of the linked list.
 * \param opt is the option to be inserted.
 */
void insertOption(Node** head, const std::string& opt) {
    Node* newNode = new Node();
    newNode->option = opt;
    newNode->next = (*head);
    (*head) = newNode;
}

void displayMenu(Node* node) {
    while (node != nullptr) {
        std::cout << node->option << std::endl;
        node = node->next;
    }
}

void handleOption(const std::string& opt) {
    if (opt == "opt1") {
        std::cout << "Option 1 selected" << std::endl;
        // Implement option 1 functionality
    } else if (opt == "opt2") {
        std::cout << "Option 2 selected" << std::endl;
        // Implement option 2 functionality
    }
}

// Add a new function for initialization
void initializeMenu(Node** head) {
    insertOption(head, "Exit");
    insertOption(head, "opt2");
    insertOption(head, "opt1");
}