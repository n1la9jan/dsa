#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
#include "header/newline.hpp"
#include "header/endl.hpp"

// void flush() {
//     for (int i = 0; i < 10; ++i) {
//         cout << i << " " << flush;
//         this_thread::sleep_for(chrono::seconds(1));
//     }
//     cout << endl;
// }

// void noflush() {
//     for (int i = 0; i < 10; ++i) {
//         cout << i << " ";
//         this_thread::sleep_for(chrono::seconds(1));
//     }
//     cout << endl;
// }



int main() {
    int x;
    cout << "Enter number of lines:";
    cin >> x;
    cout << "Testing endl:" << endl;
    generic_endl(x); // Call the function from endl.hpp

    this_thread::sleep_for(chrono::seconds(2)); // Wait for 2 seconds before the next test

    cout << "Testing newline:" << endl;
    generic_newline(x); // Call the function from newline.hpp

    return 0;
}