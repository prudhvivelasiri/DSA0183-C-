#include <iostream>
int main() {
    int n, number, sum = 0;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> number;
        sum += number;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
