#include <iostream>
using namespace std;

class A
{
public:
    void greet_morning()
    {
        cout << "Good Morning" << endl;
    }
};
class B
{
public:
    void greet_afternoon()
    {
        cout << "Good Afternoon" << endl;
    }
};
class C
{
public:
    void greet_evening()
    {
        cout << "Good Evening" << endl;
    }
};
class D : public A, public B, public C
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    D d;
    d.greet();
    d.greet_morning();
    d.greet_afternoon();
    d.greet_evening();
    return 0;
}