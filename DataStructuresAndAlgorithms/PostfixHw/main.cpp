// main.cpp
/********************************************
* Postfix expression evaluator using cin only
*
* Author: Yaseer Sabir
* Version: 3/23/2025
*********************************************/

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

bool isOperator(const string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

bool isNumber(const string& token, double &value) {
    char* end;
    value = strtod(token.c_str(), &end);
    return *end == '\0';
}

int main() {
    Stack stack;
    string token;
    int operandCount = 0, operatorCount = 0;

    cout << "Enter postfix expression (end input with newline):" << endl;
    
    while (cin >> token) {
        double num;
        if (isNumber(token, num)) {
            operandCount++;
            if (!stack.push(num)) {
                cout << "Error: Stack overflow" << endl;
                return 1;
            }
        } else if (isOperator(token)) {
            operatorCount++;
            if (stack.size() < 2) {
                cout << "Invalid expression – missing operand" << endl;
                return 1;
            }

            double b = stack.peek(); stack.pop();
            double a = stack.peek(); stack.pop();
            double result;

            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") {
                if (b == 0) {
                    cout << "Error: Division by zero" << endl;
                    return 1;
                }
                result = a / b;
            }

            if (!stack.push(result)) {
                cout << "Error: Stack overflow while pushing result" << endl;
                return 1;
            }
        } else {
            // stop reading if input stream ends (like hitting Enter)
            break;
        }

        if (cin.peek() == '\n') break; // user presses Enter
    }

    if (stack.size() == 1) {
        cout << "Result is: " << stack.peek() << endl;
    } else {
        cout << "Invalid expression – missing an operator" << endl;
    }

    return 0;
}
