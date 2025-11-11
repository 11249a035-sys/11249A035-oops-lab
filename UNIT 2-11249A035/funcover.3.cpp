#include <iostream>
using namespace std;

void print(int i) {
    cout << "Printing int: " << i << endl;
}

void print(double d) {
    cout << "Printing double: " << d << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

int main() {
    print(10);        // Calls print(int)
    print(10.5);      // Calls print(double)
    print("Hello");   // Calls print(string)
    return 0;
}
