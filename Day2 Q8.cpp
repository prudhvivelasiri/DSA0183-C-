#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int mostFrequent = arr[0];
    int maxCount = 0;
    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (arr[j] == arr[i]) {
                ++count;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    cout << "Most occurred number: " << mostFrequent << endl;

    return 0;
}
