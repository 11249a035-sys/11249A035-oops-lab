#include<iostream>
using namespace std;
class classA
{
    private:
    int num;
    public:
    classA(int n)
    {
        num=n;
    }
    friend void display(classA obj);     
};
void display(classA obj)
{
    cout<<"The value of num is:"<<obj.num<<endl;
}
int main()
{
    classA obj1(42);
    display(obj1);
    return 0;
}