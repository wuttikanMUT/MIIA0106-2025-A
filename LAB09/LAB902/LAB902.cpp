// TODO 1) เติม field และ method ใน class Student
// TODO 2) รับข้อมูลนักศึกษํา 5 คน
// TODO 3) แสดงผลข้อมูลนักศึกษําทั้งหมด
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
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		// TODO: students[i].input();
		students[i].input();
		cout << endl;
	}
	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++)
	{
		// TODO: students[i].print();
		students[i].print();
		cout << "----------------------\n";
	}
	return 0;
}
