#include <iostream>
#include <string>

int main() {
    const int MAX_STUDENTS = 10;
    std::string names[MAX_STUDENTS];
    int regnos[MAX_STUDENTS];
    int marks1[MAX_STUDENTS];
    int marks2[MAX_STUDENTS];
    int marks3[MAX_STUDENTS];
    float averages[MAX_STUDENTS];
    char grades[MAX_STUDENTS];

    int numberOfStudents;

    std::cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    std::cin >> numberOfStudents;

    if (numberOfStudents > MAX_STUDENTS) {
        numberOfStudents = MAX_STUDENTS;
    }

    for (int i = 0; i < numberOfStudents; ++i) {
        std::cout << "ENTER THE STUDENT NAME => ";
        std::cin >> names[i];

        std::cout << "ENTER THE REGISTER NUMBER => ";
        std::cin >> regnos[i];

        std::cout << "MARK 1 => ";
        std::cin >> marks1[i];

        std::cout << "MARK 2 => ";
        std::cin >> marks2[i];

        std::cout << "MARK 3 => ";
        std::cin >> marks3[i];

        averages[i] = (marks1[i] + marks2[i] + marks3[i]) / 3.0;

        if (averages[i] > 90) {
            grades[i] = 'S';
        } else if (averages[i] > 80) {
            grades[i] = 'A';
        } else if (averages[i] > 70) {
            grades[i] = 'C';
        } else if (averages[i] > 60) {
            grades[i] = 'D';
        } else if (averages[i] > 50) {
            grades[i] = 'E';
        } else {
            grades[i] = 'F';
        }

        std::cout << "Student Name: " << names[i] << std::endl;
        std::cout << "Register Number: " << regnos[i] << std::endl;
        std::cout << "Average Score: " << averages[i] << std::endl;
        std::cout << "Grade: " << grades[i] << std::endl;
    }

    return 0;
}
