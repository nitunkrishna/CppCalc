# CppCalc-C++ Console Calculator

A simple command-line calculator built with **C++**. This project supports multiple arithmetic operations, floating-point numbers, input validation, and exception handling.

The project is organized using multiple source files to practice **functions, header files, exception handling, and multi-file C++ project structure**.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Modulo / floating-point remainder
- Supports integer and floating-point numbers
- Supports multiple numbers in a single calculation
- Handles invalid numeric input using exception handling
- Prevents division by zero
- Prevents modulo by zero
- Allows repeated calculations without restarting the program
- Enter `=` to finish the current calculation
- Enter `e` to exit the calculator

## Project Structure

```text
Calculator/
├── main.cpp
├── calculator.h
├── addition.cpp
├── subtraction.cpp
├── multiplication.cpp
├── division.cpp
└── modulo.cpp
```

### File Description

| File | Purpose |
|------|---------|
| `main.cpp` | Handles the main menu and operation selection |
| `calculator.h` | Contains function declarations |
| `addition.cpp` | Implements addition |
| `subtraction.cpp` | Implements subtraction |
| `multiplication.cpp` | Implements multiplication |
| `division.cpp` | Implements division and division-by-zero handling |
| `modulo.cpp` | Implements remainder calculation using `fmod()` |

## Program Flow

```text
main()
  │
  ├── while(true)
  │
  ├── operation input
  │
  ├── e → turn off calculator
  │
  └── switch
       ├── + → addition()
       ├── - → subtraction()
       ├── * → multiplication()
       ├── / → division()
       └── % → modulo()
```

The calculator runs continuously using a `while` loop. Based on the selected operator, the `switch` statement calls the corresponding function. After completing a calculation, the program returns to the operation menu. Entering `e` terminates the program.

## How to Compile

Make sure a C++ compiler such as `g++` is installed.

Compile all source files:

```bash
g++ main.cpp addition.cpp subtraction.cpp multiplication.cpp division.cpp modulo.cpp -o calculator
```

Or, if the directory contains only the source files for this project:

```bash
g++ *.cpp -o calculator
```

## How to Run

On Linux or macOS:

```bash
./calculator
```

## Example

```text
Enter 'e' to exit.
Enter your operation (+, -, *, /, %): +

Enter numbers (Press '=' to exit): 10 20.5 5 =
Result: 35.5

Enter 'e' to exit.
Enter your operation (+, -, *, /, %): /

Enter numbers (Press '=' to exit): 100 5 0
Error: Cannot divide by zero! Enter another number: 2 =
Result: 10

Enter 'e' to exit.
Enter your operation (+, -, *, /, %): e
Calculator closed.
```

## Concepts Practiced

This project was created to practice:

- C++ functions
- Function declarations and definitions
- Header files
- Multiple `.cpp` files
- `while` loops
- `switch` statements
- String-to-number conversion using `stod()`
- Exception handling with `try` and `catch`
- Floating-point arithmetic
- `fmod()` from `<cmath>`
- Basic input validation

## Requirements

- C++ compiler with C++11 or later support
- Terminal or command prompt

## Author

**Nitun Krishna Biswas**

GitHub: `nitunkrishna`

## License

This project is licensed under the MIT License.
