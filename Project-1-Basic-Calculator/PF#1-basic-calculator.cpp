#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // Display available operations
    cout << "Simple Calculator in C++\n";
    cout << "----------------------------\n";
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Take user input for numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the operation
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator! Please use +, -, *, or /" << endl;
    }

    return 0;
}
