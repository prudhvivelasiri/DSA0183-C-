#include <iostream>
using namespace std;

class Box {
public:
    int length;

    int width;

    Box(int l, int w) : length(l), width(w) {}

    void printDimensions() const {
        cout << "Length of box : " << length << endl;
        cout << "Width of box : " << width << endl;
    }
};

int main() {
    int length, width;

    cout << "Enter the Length of box: ";
    cin >> length;

    cout << "Enter the Width of box: ";
    cin >> width;

    Box myBox(length, width);

    myBox.printDimensions();

    return 0;
}
