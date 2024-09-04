#include <iostream>
using namespace std;
int main() {
    float marks[4];
    float total = 0;
    float average;
    float percentage;
    char grade;
    cout << "Please Enter the marks of four subjects:\n";
    for (int i = 0; i < 4; ++i) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i];
    }
   average = total / 4;
    percentage = (total / 400) * 100; 

    if (percentage > 75) {
        grade = 'A'; // Distinction
    } else if (percentage >= 60 && percentage <= 75) {
        grade ='B';
    } else if (percentage >= 50 && percentage < 60) {
        grade = 'C'; 
    } else if (percentage >= 40 && percentage < 50) {
        grade = 'D';
    } else {
        grade = 'E'; 
    }

    cout << "Total Marks      = " << total << endl;
    cout << "Average Marks    = " << average << endl;
    cout << "Marks Percentage = " << percentage << endl;
    cout << "Grade            = " << grade << endl;

    return 0;
}
