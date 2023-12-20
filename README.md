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

## File Structure

1. **Node.h**: Header file for the `Node` struct and function declarations.
2. **Node.cpp**: Source file for the functions related to the `Node` struct.
3. **main.cpp**: The main file that uses the `Node` struct and functions.

## Explanation

- **Node.h**: This header file contains the declaration of the `Node` struct and the prototypes for the functions used in the program.
- **Node.cpp**: This source file contains the actual definitions of the functions declared in `Node.h`.
- **main.cpp**: This is the entry point of your program, which utilizes the `Node` struct and the functions.

By separating the code into different files, you make your code more maintainable and readable, especially for larger projects.

## Using a Global Initialization Function

You can create a function that initializes the linked list with menu options. This function can be called before entering the `main` function.
