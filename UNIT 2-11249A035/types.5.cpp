#include <iostream>
using namespace std;

class Demo {
    int *ptr;   // Pointer to demonstrate dynamic constructor
    int x;      // Regular data member

public:
    // 🔹 1. Default Constructor
    Demo() {
        x = 0;
        ptr = nullptr;
        cout << "Default Constructor Called: x = " << x << endl;
    }

    // 🔹 2. Parameterized Constructor
    Demo(int a) {
        x = a;
        ptr = nullptr;
        cout << "Parameterized Constructor Called: x = " << x << endl;
    }

    // 🔹 3. Dynamic Constructor (allocates memory)
    Demo(int a, bool dynamicFlag) {
        ptr = new int(a);
        x = *ptr;
        cout << "Dynamic Constructor Called: *ptr = " << *ptr << endl;
    }

    // 🔹 4. Copy Constructor
    Demo(const Demo &obj) {
        x = obj.x;
        if (obj.ptr != nullptr) {
            ptr = new int(*obj.ptr);  // Deep copy
        } else {
            ptr = nullptr;
        }
        cout << "Copy Constructor Called: x = " << x << endl;
    }

    // Function to display object data
    void show() const {
        if (ptr)
            cout << "x = " << x << ", *ptr = " << *ptr << endl;
        else
            cout << "x = " << x << ", ptr = NULL" << endl;
    }

    // 🔹 5. Destructor
    ~Demo() {
        if (ptr) {
            cout << "Destructor Called: Deleting memory (*ptr = " << *ptr << ")" << endl;
            delete ptr;
        } else {
            cout << "Destructor Called: No dynamic memory to free (x = " << x << ")" << endl;
        }
    }
};

// 🔸 Demonstrate constructor overloading
int main() {
    cout << "\n=== Default Constructor ===" << endl;
    Demo obj1;

    cout << "\n=== Parameterized Constructor ===" << endl;
    Demo obj2(10);

    cout << "\n=== Dynamic Constructor ===" << endl;
    Demo obj3(50, true);

    cout << "\n=== Copy Constructor ===" << endl;
    Demo obj4 = obj3; // Copy constructor called
    obj4.show();

    cout << "\n=== End of main() ===" << endl;
    return 0;
}
