#include <iostream>

int main() {
    int n;      // Variable to store the number of natural numbers
    int sum = 0; // Variable to store the sum
    int i = 1;  // Start from the first natural number

    std::cout << "Enter a positive integer: ";
    std::cin >> n;  // Read the input from the user

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        // Use a do-while loop to sum the first n natural numbers
        do {
            sum += i;  // Add the current number to sum
            ++i;       // Move to the next number
        } while (i <= n); // Continue until i exceeds n

        std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;
    }

    return 0;
}
