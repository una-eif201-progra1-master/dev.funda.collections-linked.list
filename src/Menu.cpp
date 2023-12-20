//
// Created by Maikol Guzman on 19/12/23.
//

#include "Menu.h"
#include <iostream>

Menu::Menu() : head(nullptr) {
    insertOption("Exit");
    insertOption("opt2");
    insertOption("opt1");
}

Menu::~Menu() {
    clear();
}

void Menu::insertOption(const std::string& opt) {
    Node* newNode = new Node{opt, head};
    head = newNode;
}

void Menu::displayMenu() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->option << std::endl;
        current = current->next;
    }
}

void Menu::handleUserInput() {
    std::string userChoice;
    do {
        std::cout << "\nMenu:\n";
        displayMenu();

        std::cout << "\nEnter your choice: ";
        std::cin >> userChoice;

        if (userChoice != "Exit") {
            handleOption(userChoice);
        }

    } while (userChoice != "Exit");
}

void Menu::handleOption(const std::string& opt) {
    if (opt == "opt1") {
        std::cout << "Option 1 selected" << std::endl;
        // Implement option 1 functionality
    } else if (opt == "opt2") {
        std::cout << "Option 2 selected" << std::endl;
        // Implement option 2 functionality
    }
}

void Menu::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}