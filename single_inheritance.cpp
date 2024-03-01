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
int main()
{
    B b1;
    b1.show();
    b1.disp();
    return 0;
}