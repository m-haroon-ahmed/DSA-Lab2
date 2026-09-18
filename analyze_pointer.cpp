#include <iostream>
using namespace std;

// Part1: Prints the memory address and the value stored at that address
void analyze_pointer(int *ptr) {
    cout << "Memory Address: " << ptr << endl;
    cout << "Value at that Address: " << *ptr << endl;
}

int main() {
    // Part 2a: Allocate an int on the stack
    int iValue = 42;
    cout << "--- Stack Variable ---" << endl;
    analyze_pointer(&iValue);

    // Part 2b: Allocate an int on the heap
    int *heapValue = new int;
    *heapValue = 100;
    cout << "\n--- Heap Variable ---" << endl;
    analyze_pointer(heapValue);

    // Clean up heap memory
    delete heapValue;

    cout << "\n--- Cleaned Up ---" << endl;

    return 0;
}