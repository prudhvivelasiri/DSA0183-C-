#include <iostream>
using namespace std;

int main() {
    double principal;
    int years;
    char isSenior;
    double rate;
    double interest;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the number of years: ";
    cin >> years;

    cout << "Is customer senior citizen (y/n): ";
    cin >> isSenior;
    if (isSenior == 'y' || isSenior == 'Y') {
        rate = 12.0;
    } else {
        rate = 10.0; 
    }

    interest = (principal * rate * years) / 100.0;
    cout << "Interest: " << interest << endl;

    return 0;
}
