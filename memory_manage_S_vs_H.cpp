#include <iostream>
using namespace std;

int main() {
    int a = 10;        // Stack

    int* p = new int; // Heap
    *p = 20;

    cout << a << " " << *p;

    delete p;         // free memory
    return 0;
}