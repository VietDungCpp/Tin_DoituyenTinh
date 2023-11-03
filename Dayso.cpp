#include <iostream>

using namespace std;

string s;
int k;
int tong = 0;

int main()
{
    cin >> s >> k;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] % 2 == 0)
        {
            tong += s[i] - 48;
        }
    }

    cout << s.size() << endl;
    cout << tong << endl;
    cout << s[k - 1] << endl;
}

