#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int length;

    cout << "Enter the length of the string: ";
    cin >> length;

    // Dynamically allocate memory for the string (+1 for null terminator)
    char *str = new char[length + 1];

    cout << "Enter the string: ";
    cin >> str;

    // Reverse the string in place using two pointers
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    // Freeing the allocated memory
    delete[] str;

    cout << "Memory freed." << endl;

    return 0;
}