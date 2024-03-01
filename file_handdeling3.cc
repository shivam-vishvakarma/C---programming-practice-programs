#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    ofstream out;
    out.open("abc.txt");
    cout << "Enter your content:-" << endl;
    while (getline(cin, s))
    {
        out << s;
        out << "\n";
    }
    out.close();
    ifstream in;
    in.open("abc.txt");
    while (getline(in, s))
    {
        cout << s << endl;
    }
    in.close();
    return 0;
}