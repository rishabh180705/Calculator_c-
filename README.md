# Calculator_c++
# Scientific Calculator

This is a console-based scientific calculator implemented in C++. It supports a variety of arithmetic and trigonometric operations.

## Features

- **Basic Arithmetic Operations:**
  - Addition
  - Subtraction
  - Multiplication
  - Division

- **Advanced Mathematical Functions:**
  - Exponentiation
  - Square
  - Natural Logarithm
  - Square Root

- **Trigonometric Functions:**
  - Sine
  - Cosine
  - Tangent
  - Inverse Sine
  - Inverse Cosine
  - Inverse Tangent

## How to Use

1. Clone the repository or download the source code.
2. Compile the program using a C++ compiler, for example, g++:
    ```sh
    g++ -o calculator calculator.cpp
    ```
3. Run the compiled executable:
    ```sh
    ./calculator
    ```
4. Follow the on-screen menu to perform calculations. Enter the number corresponding to the desired operation and provide the necessary input values as prompted.

## Menu Options

The following table describes the available operations:

| Option | Description       |
| ------ | ----------------- |
| 1      | Addition          |
| 2      | Subtraction       |
| 3      | Multiplication    |
| 4      | Division          |
| 5      | Exponent          |
| 6      | Square            |
| 7      | Natural Logarithm |
| 8      | Square Root       |
| 9      | Sine              |
| 10     | Cosine            |
| 11     | Tangent           |
| 12     | Inverse Sine      |
| 13     | Inverse Cosine    |
| 14     | Inverse Tangent   |
| 15     | Exit              |

## Example Usage

1. To add two numbers:
    - Select option `1` for Addition.
    - Enter the first number.
    - Enter the second number.
    - The result will be displayed.

2. To calculate the sine of an angle:
    - Select option `9` for Sine.
    - Enter the angle in degrees.
    - The result will be displayed.

## Error Handling

- Division by zero is checked and an error message is displayed if the user tries to divide by zero.
- The logarithm is defined only for positive numbers; if a non-positive number is provided, an error message is displayed.
- The square root is defined only for non-negative numbers; if a negative number is provided, an error message is displayed.
- Trigonometric functions (inverse sine and inverse cosine) validate input to ensure it is within the appropriate range.

## Dependencies

This project does not have any external dependencies and uses the standard C++ library.

## License

This project is licensed under the MIT License.

## Acknowledgements

This project was inspired by the need for a simple, console-based scientific calculator for educational purposes.

