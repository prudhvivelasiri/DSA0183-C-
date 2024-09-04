#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "\nInitial values:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nThe value after swapping for call by value:\n";
    swapByValue(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nThe value after swapping for call by reference:\n";
    swapByReference(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
