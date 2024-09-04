#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b, c;
    cout << "Enter the value for a, b, c : ";
    cin >> a >> b >> c;
    int sumThree = add(a, b, c);
    int sumTwo = add(a, b);
    cout << "The value of addition using three parameters is " << sumThree << endl;
    cout << "The value of addition using two parameters is " << sumTwo << endl;

    return 0;
}
