//
// Created by Maikol Guzman on 19/12/23.
//

#include "Menu.h"
#include <iostream>

Menu::Menu(const std::string &title, const std::vector<Option> &options)
        : head(nullptr), title(title) {
    for (auto it = options.rbegin(); it != options.rend(); ++it) {
        insertOption(it->name, it->submenu);
    }
}

Menu::~Menu() {
    clear();
}

void Menu::insertOption(const std::string &opt, Menu *submenu) {
    Node *newNode = new Node{opt, submenu, head};
    head = newNode;
}

void Menu::displayMenu() const {
    Node *current = head;
    while (current != nullptr) {
        std::cout << current->option << std::endl;
        current = current->next;
    }
}

void Menu::handleUserInput() {
    std::string userChoice;
    do {
        std::cout << "\n" << title << ":\n";
        displayMenu();

        std::cout << "\nEnter your choice: ";
        std::cin >> userChoice;

        Node *current = head;
        while (current != nullptr) {
            if (current->option == userChoice && current->submenu != nullptr) {
                current->submenu->handleUserInput();
                break;
            }
            current = current->next;
        }

    } while (userChoice != "Exit" && userChoice != "Back");
}

void Menu::clear() {
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        // Delete the submenu only if it is dynamically allocated
        if (current->submenu && current->submenu->isDynamicallyAllocated()) {
            delete current->submenu;
        }
        delete current;
        current = next;
    }
    head = nullptr;
}

bool Menu::isDynamicallyAllocated() const {
    return dynamicallyAllocated;
}

void Menu::setDynamicallyAllocated(bool dynamicallyAllocated) {
    Menu::dynamicallyAllocated = dynamicallyAllocated;
}

