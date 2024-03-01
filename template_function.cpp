#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << "Hello world!" << endl;
    cout << add('a', 'q');
    return 0;
}