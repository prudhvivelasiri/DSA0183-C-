#include <iostream>
#include <cmath>

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
        double squareRoot = sqrt(number);
        std::cout << "The square root of " << number << " is " << squareRoot << std::endl;
    return 0;
}
