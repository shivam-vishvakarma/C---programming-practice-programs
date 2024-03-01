#include <iostream>
using namespace std;

// class A
// {
// private:
//     int a, b;

// public:
//     A(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//     }
//     void display()
//     {
//         cout << "Details are:-" << a << " " << b << endl;
//     }
//     void operator-()
//     {
//         a = -a;
//         b = -b;
//     }
// };

class A
{
private:
    int a, b;

public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "Details are:-" << a << " " << b << endl;
    }
    friend A operator-(A x);
};
A operator-(A x)
{
    x.a = -x.a;
    x.b = -x.b;
    return x;
}

int main()
{
    int a, b;
    cout << "Enter two values:-";
    cin >> a >> b;
    A a1(a, b);
    a1.display();
    a1 = -a1;
    // -a1;
    a1.display();
    return 0;
}
