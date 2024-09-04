#include <iostream>
int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0; 
    while (i < size) {
        if (arr[i] != i) {
            std::cout << "The smallest missing element is: " << i << std::endl;
            return 0;
        }
        i++;
    }
    std::cout << "The smallest missing element is: " << size << std::endl;
    return 0;
}
