#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// string s1 = "SFEWR12345";
// string s2 = "97G8EIUWR";
string s1;
string s2;

vector<int> a;
int s = 0;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    cin >> s1 >> s2;
    
    for (char c1 : s1)
    {
        if (int(c1) >= 48 && int(c1) <= 57)
        {
            for (char c2 : s2)
            {
                if (c1 == c2)
                {
                    int tam = int(c1) - 48;
                    a.push_back(tam); 
                }
            }
        }
    }

    if(a.empty())
    {
        cout << 0;
        return 0;
    }

    sort(a.begin(), a.end(), cmp);

    vector<int>::iterator ip;
    ip = unique(a.begin(), a.begin() + a.size());
    a.resize(distance(a.begin(), ip));

    int n = a.size() - 1;

    for (int i = 0; i <= n; i++)
    {
        s += a[i] * pow(10, n - i);
    }

    cout << s;
}
