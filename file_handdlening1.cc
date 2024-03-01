#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    fstream abc;
    abc.open("abc.txt", ios::in | ios::out);
    if (abc.is_open())
    {
        cout << "Enter a string:-";
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            abc.put(s[i]);
        }
    }
    abc.seekg(0, ios::beg);
    while (abc)
    {
        cout << char(abc.get());
    }
    abc.close();
    return 0;
}