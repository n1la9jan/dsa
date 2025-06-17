#include <iostream>
using namespace std;

void swap(int a, int b) {
    cout << "Value of a in function: " << a << " Value of b = " << b << endl;
    a ^= b;
    b ^= a; 
    a ^= b;
    cout << "Value of a in function: " << a << " Value of b = " << b << endl;
}

void swap_pointer(int* a, int*b) {
    cout << "Value of a in function: " << *a << " Value of b = " << *b << endl;
    cout << "Value of a in function: " << a << " Value of b = " << b << endl;
    *a ^= *b;
    *b ^= *a; 
    *a ^= *b;
    cout << "Value of a in function: " << *a << " Value of b = " << *b << endl; 
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Adress of a in : " << &a << " Adress of b = " << &b << endl;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap_pointer(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
}