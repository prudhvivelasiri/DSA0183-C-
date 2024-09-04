#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    Car(int id, const string& name, int marks) 
      : id(id), name(name), marks(marks) {
        ++objectCount; 
    }
    ~Car() {
        --objectCount;
    }
    void display() const {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    static int getObjectCount() {
        return objectCount;
    }
private:
    int id;
    string name;
    int marks;
    static int objectCount; 
};
int Car::objectCount = 0;

int main() {
    int id, marks;
    string name;
    cout << "Enter the Id of the Car: ";
    cin >> id;
    cin.ignore();
    cout << "Enter the name of the Car: ";
    getline(cin, name);
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    Car car1(id, name, marks);
    cout << "Enter the Id of the Car: ";
    cin >> id;
    cin.ignore();
    cout << "Enter the name of the Car: ";
    getline(cin, name);
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    Car car2(id, name, marks);
    car1.display();
    cout << endl;
    car2.display();
    cout << endl;
    cout << "No. of objects created in the class: " << Car::getObjectCount() << endl;

    return 0;
}
