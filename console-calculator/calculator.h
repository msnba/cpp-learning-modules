#pragma once
#include <iostream>

inline double calculate(double num1, double num2,char op){
    switch (op) {
        case '+':
            return num1 + num2;
            break;
        case '-':
            return num1 - num2;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            return num1 / num2;
            break;
        default:
            std::cout<<"Non-Valid Operator\n";
            return 0.0;
    }
}