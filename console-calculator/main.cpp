#include <iostream>
#include "calculator.h"
int main() {
    char op;
    double num1, num2;
    double result = 0;

    std::cout<<"CALCULATOR\n";
    std::cout<<"Enter (+ - * /): ";
    std::cin>>op;
    std::cout<<"Enter #1: ";
    std::cin>>num1;
    std::cout<<"Enter #2: ";
    std::cin>>num2;

    std::cout<<"Result: "<<calculate(num1, num2, op)<<std::endl;
    return 0;
}