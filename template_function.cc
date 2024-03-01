#include <iostream>
using namespace std;

template <class t>
t div(t x, t y)
{
    return x / y;
}

int main()
{
    int a, b;
    cout << "Enter two numbers:-";
    cin >> a >> b;
    cout << "Answer is:-" << div(a, b) << endl;
    return 0;
}