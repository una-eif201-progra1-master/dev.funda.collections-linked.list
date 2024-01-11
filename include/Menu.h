//
// Created by Maikol Guzman on 19/12/23.
//
#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>

class Menu {
public:
    struct Option {
        std::string name;
        Menu *submenu;
    };

    explicit Menu(const std::string &title, const std::vector<Option> &options);

    ~Menu();

    void displayMenu() const;

    void handleUserInput();

private:
    struct Node {
        std::string option;
        Menu *submenu;
        Node *next;
    };

    Node *head;
    std::string title;
    bool dynamicallyAllocated;
public:
    bool isDynamicallyAllocated() const;

    void setDynamicallyAllocated(bool dynamicallyAllocated);

private:

    void insertOption(const std::string &opt, Menu *submenu);

    void clear();
};

#endif // MENU_H
