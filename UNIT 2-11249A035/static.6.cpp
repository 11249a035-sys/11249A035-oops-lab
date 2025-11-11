#include <iostream>
using namespace std;

class Student {
    int roll;
    static int count; // Declaration of static data member

public:
    void getData(int r) {
        roll = r;
        count++;  // Count how many objects created
    }

    void showData() {
        cout << "Roll No: " << roll << "\tStudent Count: " << count << endl;
    }

    // Static function to access static data
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member (outside class)
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.getData(101);
    s2.getData(102);
    s3.getData(103);

    s1.showData();
    s2.showData();
    s3.showData();

    // Access static function (no object needed)
    Student::showCount();

    return 0;
}
