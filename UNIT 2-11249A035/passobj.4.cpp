#include <iostream>
using namespace std;

class Sample {
    int x;
public:
    Sample(int a) { x = a; }
    void show() { cout << "x = " << x << endl; }

    // Function that takes object by value
    void modify(Sample s) {
        s.x += 10;
        cout << "Inside modify(): ";
        s.show();
    }
};

int main() {
    Sample obj(5);
    cout << "Before modify(): ";
    obj.show();

    obj.modify(obj); // Passed by value (copy created)

    cout << "After modify(): ";
    obj.show();
}
