#include <iostream>
using namespace std;
int main() {
    
    int arr[] = {15, 14, 25, 14, 32, 14, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
int uniqueCount = 0; 
    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[uniqueCount++] = arr[i];
        }
    }

    cout << "Sorted Array = {";
    for (int i = 0; i < uniqueCount; ++i) {
        cout << arr[i];
        if (i < uniqueCount - 1) {
            cout << ", ";
        }
    }
    cout  << endl;

    return 0;
}
