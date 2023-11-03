#include <iostream>

using namespace std;

string s;
int dem = 0;

int main()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' || s[i] == '4' || s[i] == '6' || s[i] == '9')
        {
            dem++;
        }
        else if (s[i] == '8')
        {
            dem += 2;
        }
    }

    cout << dem;
}