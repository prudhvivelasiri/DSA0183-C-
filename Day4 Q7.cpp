#include <iostream>
using namespace std;

class Series {
private:
    int limit;

public:
    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }

    void show() const {
        if (limit <= 0) {
            cout << "No terms to display." << endl;
            return;
        }
        
        int a = 0, b = 1;
        
        if (limit >= 1) {
            cout << a;
        }
        
        if (limit >= 2) {
            cout << " " << b;
        }
        
        for (int i = 3; i <= limit; ++i) {
            int next = a + b;
            cout << " " << next;
            a = b;
            b = next;
        }
        
        cout << endl;
    }
};

int main() {
    Series series;
    series.input();
    series.show();

    return 0;
}
