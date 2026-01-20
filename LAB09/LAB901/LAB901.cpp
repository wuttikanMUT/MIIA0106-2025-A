// TODO 1) เติม field ใน class Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียน method input() รับค่ําจํากผู้ใช้
// TODO 3) เขียน method print() แสดงข้อมูล
#include <iostream>
#include <string>
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
		cout << "Enter Id";
		cin >> id;
		cout << "Enter nickname";
		cin >> nickname;
		cout << "Enter LineId";
		cin >> lineId;
		cout << "Enter phone";
		cin >> phone;
	}
	void print()
	{
		cout << "ID\t NickName\t LineId\t Phone\n";
		cout << id << "\t" << nickname << "\t" << lineId << "\t" << phone << "\n";
		cout << "---------------------------";
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: s1.input();
	s1.input();
	cout << "\n=== Output Student 1 ===\n";
	// TODO: s1.print();
	s1.print();
	return 0;
}