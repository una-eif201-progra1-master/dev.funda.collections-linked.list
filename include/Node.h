//
// Created by Maikol Guzman on 19/12/23.
//

#ifndef MAIN_NODE_H
#define MAIN_NODE_H

#include <string>

/*!
 * \struct Node
 * \brief The Node struct represents a node in a linked list.
 */
struct Node {
    std::string option;
    Node* next;
};

void insertOption(Node** head, const std::string& opt);
void displayMenu(Node* node);
void handleOption(const std::string& opt);
void initializeMenu(Node** head);

#endif //MAIN_NODE_H
