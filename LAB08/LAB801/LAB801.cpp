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
int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct
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

	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout << "ID \tNickname \tLine ID \tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t\t" << s1.lineID << "\t\t" << s1.phone << "\n";
	return 0;
}