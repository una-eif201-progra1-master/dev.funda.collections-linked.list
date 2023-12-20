//
// Created by Maikol Guzman on 19/12/23.
//

#ifndef MAIN_MENU_H
#define MAIN_MENU_H


#include <string>

/*!
 * \class Menu
 * \brief The Menu class represents a menu.
 */

class Menu {
public:
    Menu();
    ~Menu();
    void displayMenu() const;
    void handleUserInput();

private:
    struct Node {
        std::string option;
        Node* next;
    };

    Node* head;

    void insertOption(const std::string& opt);
    static void handleOption(const std::string& opt);
    void clear();
};


#endif //MAIN_MENU_H
