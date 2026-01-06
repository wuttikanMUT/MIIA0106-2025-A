#include <iostream>
using namespace std;
struct Address {
	int number;
	char road[20];
	char district[20];
	char province[20];
	// TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
};
struct Phone {
	char home[10];
	char mobile[10];
};
struct Student {
	char id[9];
	char name[20];
	char surname[20];
	// TODO:
	Address addr;
	Phone tel;
};
int main() {
	Student s1;
	// TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
	cout << "Enter Student Information:\n";
	cout << "ID: "; cin >> s1.id;
	cout << "Name: "; cin >> s1.name;
	cout << "Surname: "; cin >> s1.surname;

	cout << "Address - House Number: ";
	// TODO 3) cin >>
	cin >> s1.addr.number;
	cout << "Address - Road: ";
	// TODO 3) cin >>
	cin >> s1.addr.road;
	cout << "Address - District: ";
	// TODO 3) cin >>
	cin >> s1.addr.district;
	cout << "Address - Province: ";
	// TODO 3) cin >>
	cin >> s1.addr.province;
	cout << "Phone - Home: ";
	// TODO 3) cin >>
	cin >> s1.tel.home;
	cout << "Phone - Mobile: ";
	// TODO 3) cin >>
	cin >> s1.tel.mobile;
	
	cout << "\n===== Output =====\n";
	//// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	cout << "ID: " << s1.id << "\n";
	cout << "Name: " << s1.name << "\n";
	cout << "Surname: " << s1.surname << "\n";
	cout << "number: " << s1.addr.number << "\n";
	cout << "road: " << s1.addr.road << "\n";
	cout << "district: " << s1.addr.district << "\n";
	cout << "province: " << s1.addr.province << "\n";

	cout << "home: " << s1.tel.home << "\n";
	cout << "mobile: " << s1.tel.mobile << "\n";

	return 0;
}