#include <iostream>
#include <thread>
#include <chrono>
#include "../header/endl.hpp"

using namespace std;

void generic_endl(int n) {
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < n; ++i) {
        cout << "Line " << i << endl;
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "endl took " << duration.count() << " ms" << endl;

}