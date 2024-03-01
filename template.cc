#include <iostream>
using namespace std;

template <class t1, class t2>
class A
{
    t1 a;
    t2 b;

public:
    A(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void multi(t1 x, t2 y)
    {
        a = a * x;
        b = b * y;
        cout << a << " " << b << endl;
    }
};
int main()
{
    int a, b;
    cout << "Enter two integers:-";
    cin >> a >> b;
    A<int, int> a1(a, b);
    a1.multi(a, b);
    cout << "Enter two decimal numbers:-";
    float c, d;
    cin >> c >> d;
    A<float, float> a2(c, d);
    a2.multi(c, d);
    return 0;
}