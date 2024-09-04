#include <iostream>
using namespace std;

int main() {
    int number, bitPosition;

    cout << "Enter Number: ";
    cin >> number;

    cout << "Enter bit number you wish to set: ";
    cin >> bitPosition;
    int mask = 1 << bitPosition;


    number = number | mask;

    cout << "Bit set Successfully" << endl;
    cout << "Answer: " << number << endl;

    return 0;
}
