#include <iostream>
using namespace std;

class Demo
{
    char ch;

public:
    Demo()
    {
        cout << "Enter a alphabet:-";
        cin >> ch;
    }
    void check()
    {
        try
        {
            if (!isalpha(ch))
            {
                throw ch;
            }
            else
            {
                cout << "You entered a alphabet" << endl;
            }
        }
        catch (char ch)
        {
            cout << "You not enter a alphabet\nEnter again:-";
            cin >> ch;
            if (!isalpha(ch))
            {
                throw;
            }
        }
    }
};
int main()
{
    Demo d;
    try
    {
        d.check();
    }
    catch (...)
    {
        cout << "Again you not enter a alphabet" << endl;
    }
    return 0;
}