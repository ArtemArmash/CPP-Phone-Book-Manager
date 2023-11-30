#pragma once
using namespace std;
double ChoiceOperator(double operand1, double operand2, char op) {
    switch (op) {
    case '+':
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '*':
        return operand1 * operand2;
    case '/':
        if (operand2 != 0) {
            return operand1 / operand2;
        }
        else {
            cout << "!!!!Error, / on 0!!!!" << endl;
            exit(EXIT_FAILURE);
        }
    default:
        return 0;
    }
}