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
    virtual void add()
    {
        cout << "Adding numbers......." << endl;
        cout << "Assition is:- " << a + b << endl;
    }
};
class B : public A
{
public:
    void add()
    {
        cout << "Addition is :-" << a + b << endl;
    }
};
int main()
{
    A *a;
    B b;
    a = &b;
    a->add();
    return 0;
}