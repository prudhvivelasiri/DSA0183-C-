#include <iostream>
using namespace std;

int main() {
  int N;

    cout << "Enter the position of Fibonacci number (N): ";
    cin >> N;

   
    int a = 0, b = 1, fib = 0;
    if (N == 1) {
        fib = a;
    } else if (N == 2) {
        fib = b; 
    } else {
        for (int i = 3; i <= N; ++i) {
            fib = a + b; 
            a = b;       
            b = fib;    
        }
    }
    cout << "The " << N << "th Fibonacci number is: " << fib << endl;
    
    return 0;
}
