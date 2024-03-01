#include <iostream>
using namespace std;
// int main()
// {
// 	string s;
// 	cin >> s;
// 	if ((int(s[7]) + int(s[8])) % 2 != 0)
// 	{
// 		cout << "odd" << endl;
// 	}
// 	else
// 	{
// 		cout << "even" << endl;
// 	}
// 	return 0;
// }
int main()
{
	string s;
	cin >> s;
	if (s[2] != 'A' && s[2] != 'E' && s[2] != 'I' && s[2] != 'O' && s[2] != 'U' && s[2] != 'Y')
	{
		int t;
		for (int i = 0; i < 8; i++)
		{
			if (i == 1 || i == 2 || i == 3 || i == 5 || i == 6)
			{
				continue;
			}
			t = int(s[i]) + int(s[i + 1]);
			if (t % 2 != 0)
			{
				break;
			}
		}
		if (t % 2 == 0)
		{
			cout << "valid" << endl;
		}
		else
		{
			cout << "invalid" << endl;
		}
	}
	else
	{
		cout << "invalid" << endl;
	}
	return 0;
}