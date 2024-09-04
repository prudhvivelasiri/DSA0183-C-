#include <iostream>

using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    int a1, b1, a2, b2;

    cout << "Enter the value of Complex Numbers a, b" << endl;
    cin >> a1 >> b1;
    Complex c1(a1, b1);

    cout << "Enter the value of Complex Numbers a, b" << endl;
    cin >> a2 >> b2;
    Complex c2(a2, b2);

    cout << "Input Values" << endl;
    c1.display();
    c2.display();

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    cout << "Result" << endl;
    sum.display();
    difference.display();

    return 0;
}
