# Dynamic Menu with Linked List 

## Documentation

- [Course website](https://mikeguzman.dev/software-development/programming-fundations/basic-programming-topics/collections/)

## High-Level Outline

1. **Define the Node Structure**: Create a `struct` named `Node` that will represent each option in the menu. This struct should contain the menu option name and a pointer to the next node.
2. **Create the Linked List**: Implement functions to add nodes to the linked list, each representing a menu option.
3. **Display Menu**: Implement a function to display the menu options by traversing the linked list.
4. **Handle User Input**: Use a `switch` statement to handle user input, allowing the user to select different options.
5. **Implement Menu Options**: Define what happens when each option is selected.
6. **Exit Option**: Include an option to exit the application.

## Explanation

- The `Node` struct represents each menu option.
- `insertOption` adds a new option to the front of the linked list.
- `displayMenu` traverses the list and displays each option.
- `handleOption` defines what happens for each menu option.
- The `main` function drives the program, displaying the menu and responding to user input until "Exit" is chosen.
