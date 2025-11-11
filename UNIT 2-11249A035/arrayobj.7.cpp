#include <iostream>
using namespace std;

class Student {
    int roll;
    char name[30];
    float marks;

public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showData() {
        cout << "\nRoll No: " << roll
             << "\nName: " << name
             << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s[3]; // Array of 3 Student objects

    cout << "=== Enter Student Details ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        s[i].getData();
    }

    cout << "\n=== Displaying Student Details ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        s[i].showData();
    }

    return 0;
}
