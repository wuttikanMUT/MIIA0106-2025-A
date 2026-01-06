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
// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
	// TODO
	cout << "\n=== Output Student 1 ===\n";
	cout << "ID \tNickname \tLine ID \tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t\t" << s1.lineID << "\t\t" << s1.phone << "\n";
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter ID: ";
	cin >> s1.id;

	cout << "Enter Nickname: ";
	cin >> s1.nickname;

	cout << "Enter Line ID: ";
	cin >> s1.lineID;

	cout << "Enter Phone: ";
	cin >> s1.phone;

	cout << "\n=== Output (from function) ===\n";
	// TODO: เรียก printStudent
	printStudent(s1);
	return 0;
}