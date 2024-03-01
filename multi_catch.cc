#include <iostream>
using namespace std;

class DEMO
{
    int a;

public:
    DEMO()
    {
        cout << "Choose a numbers 1, 2, 3:-";
        cin >> a;
    }
    void choose()
    {
        try
        {
            if (a == 1)
            {
                throw 1;
            }
            if (a == 2)
            {
                throw 3.1F;
            }
            if (a == 3)
            {
                throw 'a';
            }
        }
        catch (int a)
        {
            cout << "You got a integer" << endl;
        }
        catch (float a)
        {
            cout << "You got a floating" << endl;
        }
        catch (char a)
        {
            cout << "You got a character" << endl;
        }
    }
};
int main()
{
    DEMO d;
    d.choose();
    return 0;
}