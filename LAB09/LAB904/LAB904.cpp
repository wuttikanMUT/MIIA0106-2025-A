#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    // TODO 1) เติม field และ method ใน class Student
    int id;
    string nickname;
    string lineId;
    string phone;

    void input() {
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter nickname: ";
        cin >> nickname;
        cout << "Enter LineId: ";
        cin >> lineId;
        cout << "Enter phone: ";
        cin >> phone;
    }

    void print() {
        cout << id << "\t " << nickname << "\t\t " << lineId << "\t " << phone << endl;
    }
};

// TODO 2) เขียน swapStudent(Student&, Student&)
void swapStudent(Student& a, Student& b) {
    Student tmp = a;
    a = b;
    b = tmp;
}

// TODO 3) เขียน sortByID(Student[], size) แบบ Bubble Sort
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            // ถ้า ID ตัวหน้ามากกว่าตัวหลัง ให้สลับที่กัน (เรียงน้อยไปมาก)
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    cout << "ID\t NickName\t LineId\t Phone\n";
    cout << "--------------------------------------------\n";
    for (int i = 0; i < size; i++) {
        students[i].print(); // TODO: students[i].print();
    }
    cout << "--------------------------------------------\n";
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        students[i].input(); // TODO: students[i].input();
        cout << endl;
    }

    sortByID(students, SIZE);

    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE); // แสดงผลหลังจากเรียงลำดับ

    return 0;
}