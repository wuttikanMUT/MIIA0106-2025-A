#include <iostream>
#include <string>

using namespace std;

struct Phone {
	string mobile;
	string home;
};

struct Parent {
	string name;
	string relationship;
	Phone contact;
};


struct Student {
	string id;
	string nickname;
	string lineId;
	Phone myContact;
	Parent myParent;
};

int main() {
	Student s1;

	// 1. Student Data
	s1.id = "6811830002";
	s1.nickname = "Tan";
	s1.lineId = "T001";

	s1.myContact.mobile = "087-056-5485";
	s1.myContact.home = "02-123-4567";

	s1.myParent.name = "Somchai";
	s1.myParent.relationship = "Father";
	s1.myParent.contact.mobile = "089-987-6543";
	s1.myParent.contact.home = "02-123-4567";

	cout << "--- Student Information ---" << endl;
	cout << "ID: " << s1.id << " (" << s1.nickname << ")" << endl;
	cout << "Parent Name: " << s1.myParent.name << endl;
	cout << "Parent Mobile: " << s1.myParent.contact.mobile << endl;

	return 0;
}

