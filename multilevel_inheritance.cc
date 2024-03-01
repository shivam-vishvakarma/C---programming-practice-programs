#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A()
    {
        cout << "Enter value of a:-";
        cin >> a;
    }
    void show()
    {
        cout << "Value of a is:-" << a << endl;
    }
};
class B : public A
{
public:
    int b;
    B()
    {
        cout << "Enter value of b:-";
        cin >> b;
    }
    void disp()
    {
        cout << "Value of a and b is:-" << a << " and " << b << endl;
    }
};
class C : public B
{
public:
    int c;
    void call()
    {
        c = a + b;
    }
};
class D : public C
{
public:
    void disp_call()
    {
        cout << "Addition a and b is:-" << c << endl;
    }
};
int main()
{
    D d1;
    d1.show();
    d1.disp();
    d1.call();
    d1.disp_call();
    return 0;
}