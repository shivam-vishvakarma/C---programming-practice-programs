#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    A()
    {
        cout << "Enter two values:-";
        cin >> a >> b;
    }
};
class B : virtual public A
{
public:
    void add()
    {
        cout << "Addition is -" << a + b << endl;
    }
};
class C : virtual public A
{
public:
    void mult()
    {
        cout << "Multiplication is:-" << a * b << endl;
    }
};
class D : public B, public C
{
public:
    void show()
    {
        cout << "value of a and b is " << a << " and " << b << endl;
    }
};
int main()
{
    D d;
    d.add();
    d.mult();
    d.show();
    return 0;
}