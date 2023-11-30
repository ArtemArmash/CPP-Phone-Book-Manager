#pragma once
bool Operators(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
bool Check_Precedence(char op1, char op2) {
    if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-')) return true;
    else return false;
}