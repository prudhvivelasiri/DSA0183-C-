#include <iostream>
using namespace std;
class Largest {
private:
    int a, b, m; 
public:
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        m = z;
    }
    friend void find_Max(Largest);
};
void find_Max(Largest obj) {
    int max = obj.a;

    if (obj.b > max) {
        max = obj.b;
    }

    if (obj.m > max) {
        max = obj.m; 
    }   cout << "Maximum no is " << max << endl;
}
int main() {
    Largest numbers; 
    int num1, num2, num3;
    cout << "Enter the first no: ";
    cin >> num1;
    cout << "Enter the second no: ";
    cin >> num2;
    
    numbers.setData(num1, num2);
    find_Max(numbers);

    return 0;}
