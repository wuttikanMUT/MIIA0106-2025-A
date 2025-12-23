#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
	cout << "Student Name: " << name << "\n";
	cout << "Student ID : " << id << "\n";
	cout << "Score : " << fixed << setprecision(2) << score << "\n";
	cout << "Grade : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}
int main()
{
	const int N = 5;
	string name[N], id[N];
	double score[N];
	char grade[N];
	// TODO: วนรับข้อมูล N คน
	for (int i = 0; i < N; i++)
	{
		// Hint: getline(cin >> ws, name[i]); สําหรับชื่อ
		cout << "Enter student name: ";
		getline(cin >> ws, name[i]);
		cout << "Enter student ID: ";
		cin >> id[i];
		cout << "Enter student score: ";
		cin >> score[i];
		// TODO: calculateGrade(score[i], grade[i]);
		calculateGrade(score[i], grade[i]);
	}
	// TODO: วนแสดงผล N คน ด้วย displayStudentInfo
	for (int i = 0; i < N; i++)
	{
		displayStudentInfo(name[i], id[i], score[i], grade[i]);
	}
	return 0;
} 