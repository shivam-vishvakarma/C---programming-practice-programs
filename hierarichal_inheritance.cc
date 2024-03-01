#include <iostream>
using namespace std;

class A
{
public:
    void disp()
    {
        cout << "I am parent class A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "I am child class B" << endl;
    }
};

class C : public A
{
public:
    void show()
    {
        cout << "I am child class C" << endl;
    }
};

class D : public A
{
public:
    void show()
    {
        cout << "I am child class D" << endl;
    }
};

int main()
{
    B b;
    C c;
    D d;
    b.disp();
    b.show();
    c.disp();
    c.show();
    d.disp();
    d.show();
    return 0;
}
