#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }

    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo obj; // Constructor called here
    cout << "Inside main function." << endl;
} // Destructor called automatically when 'obj' goes out of scope
