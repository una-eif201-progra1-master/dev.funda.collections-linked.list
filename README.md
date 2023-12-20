# Inheritance

## Documentation

- [Technical pages](https://una-eif201-progra1-master.github.io/dev.funda.oop-inheritance/)
- [Course website](https://mikeguzman.dev/software-development/programming-fundations/object-oriented-programming/)

## Resources

- [CMake](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
- [CLion from Jetbrains](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html)
- [Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp)
- [Repl.it](https://replit.com/@MaikolGuzman?path=folder/EIF201%20-%20Progra%201)
- [Github Course Space](https://github.com/una-eif201-progra1-master)

## Project Directory Structure

```bash
MyProject/
│
├── .github/workflows         # [optional] GitHub Actions workflow files
├── docs/                     # [optional] Documentation files│
├── src/                      # [required] Source files directory
│   ├── main.cpp              # [required] Main program file
│   └── MyClass.cpp           # Implementation of MyClass
│
├── include/                  # [required] Header files directory
│   └── MyClass.h             # Header for MyClass
│
├── .gitignore                # [required] Git ignore file
├── .replit                   # [optional] Repl.it configuration file
├── replit.nix                # [optional] Repl.it configuration file
├── CMakeLists.txt            # [required] CMake configuration file
└── README.md                 # [required] README file
```

1. **.github/workflows**: This is a directory typically used in GitHub repositories for storing workflow files. GitHub
   workflows are part of GitHub Actions, which automate certain processes in a software development workflow, like
   running tests, deploying code, or other CI/CD (Continuous Integration/Continuous Deployment) tasks.

2. **docs/html**: This looks like a directory within the `docs` folder, likely used for storing HTML files related to
   documentation. The commit message "Final changes" tagged as "now" indicates recent updates or finalization of the
   documentation in HTML format.

3. **include**: This is commonly a directory containing header files in C or C++ projects, but it can also include other
   types of files in different contexts.
    1. `MyClass.h`: This contains the declarations of your class or functions.

4. **src**: Short for "source", this directory usually contains the source code of the project.
    1. `main.cpp`: This is the entry point of your program.
    2. `MyClass.cpp`: This contains the implementation of a class or functions.

5. **.gitignore**: This is a special file used by Git, the version control system. It tells Git which files or
   directories to ignore in a project, usually things like build outputs, temporary files, or files containing sensitive
   information.

6. **.replit**: This file is specific to Repl.it, an online IDE (Integrated Development Environment). It's used to
   configure the Repl.it environment, such as specifying the language, build, and run commands.

7. **CMakeLists.txt**: This is a file used by CMake, a build system that manages the build process in an operating
   system and compiler-independent manner.

8. **README.md**: This file, typically written in Markdown, provides an overview of the project, including instructions
   on how to install, configure, and use it.

9. **replit.nix**: This is likely a configuration file for Nix, a powerful package manager, used in the context of
   Repl.it. It specifies dependencies and environment settings for the project.

## Building the Project

1. **Creating a Build Directory**: It's a good practice to do an out-of-source build. This keeps your build files
   separate from your source files.

    ```sh
    mkdir build
    cd build
    ```

2. **Running CMake**: From within the `build` directory, run CMake to generate the build system.

    ```sh
    cmake ..
    ```

3. **Compiling the Project**: After CMake has done its job, you can use the generated build system to compile the
   project.

    ```sh
    make
    ```

   This will compile your project and generate an executable in the `build` directory.

### Notes

- **CMake Version**: Make sure to specify the minimum required version of CMake that your project needs.
- **Project Structure**: This is a simple example. Larger projects may have more complex structures, with subdirectories
  for different modules, tests, third-party libraries, etc.
- **C++ Standard**: Set the C++ standard according to your project requirements.
- **Include Directories**: Use `include_directories` to include your header files.
- **Executable**: Use `add_executable` to specify the executable name and the source files required to build it.

This structure is scalable and can be expanded as your project grows, by adding more source files, headers, and
potentially CMake configuration files in subdirectories.

## The Example

```c++
// Example of Inheritance
class Vehicle {
public:
string brand = "Ford";

void honk() {
cout << "Tuut, tuut!" << endl;
}
};

class Car:
public Vehicle {
public:
string model = "Mustang";
};

int main() {
Car car1;
car1.honk();  // Output: Tuut, tuut!
cout << car1.brand + " " + car1.model;  // Output: Ford Mustang
return 0;
}

```

`Car` is a derived class that inherits from the base class `Vehicle`.
