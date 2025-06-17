#include <iostream>
using namespace std;

int fac(int n) {
    int fac = 1;
    for (int i = 1; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "No negattive numbers" << endl;
        return 1;
    } else {
        cout << "Factoral of "<< n << "is: " << fac(n) << endl;
        return 0;
    }
}