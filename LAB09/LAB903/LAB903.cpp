// TODO 1) เติม field และ method ใน class Student
// TODO 2) เขียนฟังก์ชัน printStudent(Student s)
// TODO 3) เรียกใช้งําน printStudent จําก main
#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	// TODO
	int id;
	string nickname;
	string lineId;
	string phone;

	void input()
	{
		cout << "Enter ID";
		cin >> id;
		cout << "Enter NickName";
		cin >> nickname;
		cout << "Enter LineID";
		cin >> lineId;
		cout << "Enter Phone";
		cin >> phone;
	}

	void print()
	{
		cout << "ID\t NickName\t LineId\t Phone\n";
		cout << id << "\t" << nickname << "\t" << lineId << "\t" << phone;
		cout << "--------------------------";
	}
};
void printStudent(Student s)
{
	// TODO: แสดงข้อมูลจําก object s
	cout << "ID\t NickName\t LineId\t Phone\n";
	cout << s.id << "\t" << s.nickname << "\t" << s.lineId << "\t" << s.phone <<"\n";
	cout << "--------------------------";
}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: s1.input();
	s1.input();
	cout << "\n=== Output (from function) ===\n";
	// TODO: printStudent(s1);
	printStudent(s1);

	return 0;
}