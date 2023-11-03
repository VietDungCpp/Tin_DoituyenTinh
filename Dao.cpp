#include <iostream>
#include <string>

using namespace std;

string s;
string chuoidao = "";

void daochuoi(string s)
{
    if (s.empty()) return;

    string s1, s2;

    int pos = s.find_last_of(' ');

    if (pos == s.npos)
    {
        s1 = s;
        s2 = "";
    }
    else
    {
        s1 = s.substr(pos + 1);
        s2 = s.substr(0, pos);
    }

    chuoidao += s1 + " ";
    daochuoi(s2);
}

int main()
{
    getline(cin, s);

    daochuoi(s);

    cout << chuoidao << endl;
}