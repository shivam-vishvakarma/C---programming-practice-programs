#include <iostream>
#include <fstream>
using namespace std;

class A
{
    string s;

public:
    void getdata()
    {
        cout << "Enter a string:-";
        cin >> s;
    }
    void show()
    {
        cout << s << endl;
    }
};
int main()
{
    A a1;
    fstream abc;
    abc.open("abc.txt");
    a1.getdata();
    abc.write((char *)&a1, sizeof(a1));
    A a2;
    abc.seekg(ios::beg);
    abc.read((char *)&a2, sizeof(a2));
    a2.show();
    return 0;
}