#include <iostream>
using namespace std;

int main() {
    int originalNumber, reversedNumber = 0, remainder, number;
    cout << "Enter an integer: ";
    cin >> originalNumber;

    
    number = originalNumber;
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        cout << "It is a palindrome" << endl;
    } else {
        cout << "It is not a palindrome" << endl;
    }

    return 0;
}
