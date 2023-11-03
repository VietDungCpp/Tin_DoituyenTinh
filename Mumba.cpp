#include <iostream>

using namespace std;

int n;
string s[100];
int dem = 0;

bool kt(string s)
{
    int n = s.size();

    if (s.find("bb") != -1)
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'a' && s[i] != 'b')
        {
            return false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string a = s.substr(i, j - i + 1);
            a = a + a + a;

            if (s.find(a) != -1)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (kt(s[i]))
        {
            dem++;
        }
    }
    cout << dem;
}