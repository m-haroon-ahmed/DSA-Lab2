#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size);   // declared, not implemented yet

// --- Temporary stub so the code compiles ---
bool isSorted(const int* arr, const int size) {
    return false;   
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testSortedArray passed" << endl;
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
    cout << "testUnsortedArray passed" << endl;
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testDuplicateValues passed" << endl;
}

void testSingleElement() {
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);
    cout << "testSingleElement passed" << endl;
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "testDescendingArray passed" << endl;
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
    cout << "testNegativeValues passed" << endl;
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    cout << "All tests passed!" << endl;
    return 0;
}