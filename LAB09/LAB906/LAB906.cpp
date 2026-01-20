#include <iostream>
#include <string>
using namespace std;

class Student
{
public:

    int id;
    string nickname;
};

int main()
{
    Student s1;

    Student* p = &s1;

    p->id = 2;
    p->nickname = "Tan";

    cout << "ID: " << p->id << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}