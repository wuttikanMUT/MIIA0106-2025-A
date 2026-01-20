// TODO 1) เติม field: id, nickname, height, weight
// TODO 2) เขียน method input(), print(), calcBMI()

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

	double height;
	double weight;
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

		cout << "Enter height";
		cin >> height;
		cout << "Enter weight";
		cin >> weight;
	}
	void print()
	{
		cout << "ID\t NickName\t LineId\t Phone\n";
		cout << id << "\t" << nickname << "\t" << lineId << "\t" << phone << "\n";
		cout << "---------------------------";
	}
	double calcBMI()
	{
		double h = height / 100.0;
		return weight / (h * h);
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();
	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();
	cout << "BMI : " << s1.calcBMI() << endl;
	return 0;
}