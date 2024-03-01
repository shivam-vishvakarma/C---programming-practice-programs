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
    virtual void add() = 0;
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
    B b;
    b.add();
    return 0;
}