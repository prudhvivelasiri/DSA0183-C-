#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Enter the string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); ++i) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - 'a' + 'A';
        }
    }
    int left = 0;
    int right = input.length() - 1;
    while (left < right) {
        while (left < right && !((input[left] >= 'A' && input[left] <= 'Z') || (input[left] >= '0' && input[left] <= '9'))) {
            ++left;
        }
        while (left < right && !((input[right] >= 'A' && input[right] <= 'Z') || (input[right] >= '0' && input[right] <= '9'))) {
            --right;
        }
        if (input[left] != input[right]) {
            cout << "THE GIVEN STRING IS NOT A PALINDROME" << endl;
            return 0; 
        }
        ++left;
        --right;
    }

    cout << "THE GIVEN STRING IS A PALINDROME" << endl;

    return 0;
}
