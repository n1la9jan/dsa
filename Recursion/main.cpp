#include <iostream>
using namespace std;

int fac(int n ) {
    return (n == 0 || n == 1) ? 1 : n * fac(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is " << fac(n) << endl;
    }

    return 0;
}