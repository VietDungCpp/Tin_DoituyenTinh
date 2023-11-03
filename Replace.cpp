#include <iostream>
#include <string>

using namespace std;

string s, s1, s2;

void ReplaceString(string &s, string x, string y)
{
	while (s.find(x, 0) != string::npos)
    {
		s.replace(s.find(x, 0), x.size(), y);
	}
}

int main()
{
	getline(cin, s);
	getline(cin, s1);
	getline(cin, s2);

	ReplaceString(s, s1, s2);

	cout << s;
}
    