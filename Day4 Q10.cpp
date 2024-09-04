#include <iostream>
#include <string>

using namespace std;

int main() {
    double taxableIncome;
    double tax = 0.0;

    cout << "Enter your Income: ";
    cin >> taxableIncome;

    if (taxableIncome <= 60000) {
        tax = 0;
    } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
        tax = taxableIncome * 0.05;
    } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
        tax = taxableIncome * 0.10;
    } else {
        tax = taxableIncome * 0.15;
    }

    int taxInt = static_cast<int>(tax);
    string taxStr = to_string(taxInt);

    string formattedTax;
    int length = taxStr.length();
    int count = 0;

    for (int i = length - 1; i >= 0; --i) {
        if (count > 0 && count % 3 == 0) {
            formattedTax.insert(formattedTax.begin(), ',');
        }
        formattedTax.insert(formattedTax.begin(), taxStr[i]); 
        ++count;
    }

    cout << "Your income tax is : " << formattedTax << endl;

    return 0;
}
