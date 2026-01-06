#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO
	string id;
	string nickname;
	string lineID;
	string phone;
};
// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
	// TODO
	Student temp = a;
	a = b;
	b = temp;
}
// TODO: sort เขียนเอง (Bubble sort) id น้อยไปมาก
// 20 54 38 45 55
// 20 30 45 54 55

void sortByID(Student students[], int size) {
	// TODO
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (students[j].id > students[j + 1].id) 
			{
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}
void printStudents(Student students[], int size) {
	cout << "ID \tNickname \tLine ID \tPhone\n";
	for (int i = 0; i < size; i++) {
		// TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineID << "\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}
}
int main() {
	const int SIZE = 5;
	Student students[SIZE];

	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";

		cout << "Enter of id: ";
		cin >> students[i].id;

		cout << "Enter of Nickname: ";
		cin >> students[i].nickname;

		cout << "Enter of Line ID: ";
		cin >> students[i].lineID;

		cout << "Enter of Phone: ";
		cin >> students[i].phone;

		cout << endl;
	}
	sortByID(students, SIZE);
	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);

	return 0;
}