#include <iostream>
#include <thread>
#include <chrono>
#include "../header/newline.hpp"
using namespace std;

void generic_newline(int n) {
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < n; ++i) {
        cout << "Line " << i << '\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "newline took " << duration.count() << " ms" << endl;
}