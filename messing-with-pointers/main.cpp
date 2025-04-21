#include <iostream>

int main() {
    int a = 10;
    int *b = &a;
    int *c = new int[5];
    c[0] = 10;
    int **d = &c; //double array-dereference thing because *c only means it is an array

    std::cout << *b << " " << b << " " << &a << " " << c[0] << " "<<*d[0]<<std::endl;

    delete[] c;
}
