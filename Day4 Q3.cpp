#include <iostream>
using namespace std;

int main() {
    int VOTING_AGE = 18;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= VOTING_AGE) {
        cout << "You are eligible to vote." << endl;
    } else {
        int yearsLeft = VOTING_AGE - age;
        cout << "You are allowed to vote after " << yearsLeft << " years." << endl;
    }

    return 0;
}
