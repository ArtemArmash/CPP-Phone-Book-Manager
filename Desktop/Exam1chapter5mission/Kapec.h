#pragma once
#include <iostream>
#include <cmath>
#include "Choice.h"
#include "Op&Precedence.h"
using namespace std;
double Processing(char* expression) {
    double Number_Stack[100];
    char Op_Stack[100];
    int Number_Top = -1;
    int Op_Top = -1;
    int i = 0;
    // Ітерація по символам виразу
    while (expression[i] != '\0') {
        if (expression[i] == ' ') {
            i++;
            continue;
        }
        // Обробка числа або від'ємного числа
        if (isdigit(expression[i]) || (expression[i] == '-' && isdigit(expression[i + 1]))) {
            double num = 0;
            int sign = 1;
            if (expression[i] == '-') {
                sign = -1;
                i++;
            }
            while (isdigit(expression[i]) || expression[i] == '.') {
                if (expression[i] == '.') {
                    i++;
                    double decimal = 0.1;
                    while (isdigit(expression[i])) {
                        num += (expression[i] - '0') * decimal;
                        decimal *= 0.1;
                        i++;
                    }
                    break;
                }
                num = num * 10 + (expression[i] - '0');
                ++i;
            }
            Number_Stack[++Number_Top] = sign * num;
        }
        else if (expression[i] == '(') {
            Op_Stack[++Op_Top] = expression[i];
            i++;
        }
        // Обробка закриваючої дужки
        else if (expression[i] == ')') {
            // Виконання операцій, поки не зустрінеться відкриваюча дужка
            while (Op_Top > -1 && Op_Stack[Op_Top] != '(') {
                char op = Op_Stack[Op_Top--];
                double operand2 = Number_Stack[Number_Top--];
                double operand1 = Number_Stack[Number_Top--];
                double result = ChoiceOperator(operand1, operand2, op);
                Number_Stack[++Number_Top] = result;
            }
            Op_Top--;
            i++;
        }
        else if (Operators(expression[i])) {
            // Виконання операцій, поки стек не порожній, не зустрінеться відкриваюча дужка,
            // і пріоритет поточного оператора більший за верхній оператор на стеку
            while (Op_Top > -1 && Op_Stack[Op_Top] != '(' && Check_Precedence(Op_Stack[Op_Top], expression[i])) {
                char op = Op_Stack[Op_Top--];
                double operand2 = Number_Stack[Number_Top--];
                double operand1 = Number_Stack[Number_Top--];
                double result = ChoiceOperator(operand1, operand2, op);
                Number_Stack[++Number_Top] = result;
            }
            Op_Stack[++Op_Top] = expression[i];
            i++;
        }
    }
    while (Op_Top > -1) {
        char op = Op_Stack[Op_Top--];
        double operand2 = Number_Stack[Number_Top--];
        double operand1 = Number_Stack[Number_Top--];
        double result = ChoiceOperator(operand1, operand2, op);
        Number_Stack[++Number_Top] = result;
    }
    return Number_Stack[Number_Top];
}