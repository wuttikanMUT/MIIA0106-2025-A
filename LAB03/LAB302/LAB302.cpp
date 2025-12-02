#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentId, studentName;
    int score = 80;
    char grade;

    cout << "Enter student ID: ";
    getline(cin, studentId);

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter score: ";
    cin >> score;

    if (score >= 90 && score <= 100)
        grade = 'A';

    else if (score >= 80 && score <= 89)
        grade = 'B';
    else if (score >= 70 && score <= 79)
        grade = 'C';
    else if (score >= 60 && score <= 69)
        grade = 'D';
    else
        grade = 'F';

    cout << "------ Student Report ------" << endl;
    cout << "Student ID : " << studentId << endl;
    cout << "Name : " << studentName << endl;
    cout << "Score : " << score << endl;
    cout << "Grade : " << grade << endl;
    cout << "-----------------------------" << endl;

    return 0;
}

