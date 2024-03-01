#include<iostream>
using namespace std;
class number
{
    int n;
    public:
    void insert()
    {
        cout<<"Enter a number:";
        cin>>n;
    }
    void friend fact(number a);
};
void fact(number a)
{
    int fact=1;
    for (int i = 1; i <= a.n; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<a.n<<" is "<< fact<< endl;
}

int main(int argc, char const *argv[])
{
    number n1;
    n1.insert();
    fact(n1);
    return 0;
}
