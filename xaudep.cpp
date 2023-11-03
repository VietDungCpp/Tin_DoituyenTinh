#include <iostream>
#include <string>

using namespace std;

int n;
string s;
string a;
int dem = 0;

int main()
{
    freopen("xaudep.inp", "r", stdin);
    freopen("xaudep.out", "w", stdout);
    
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            dem++;
        }
        else
        {
            if (dem > a.size())
            {
                a = s.substr(i - dem, dem);
            }
            dem = 0;
        }
    }
    cout << a.size() << endl;
    cout << a;
}