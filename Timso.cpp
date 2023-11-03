#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;
int dem = 1, tam;
int a[10000];
int mina = 100000, maxa = 0;

int main()
{
    cin >> s;

     for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            tam = tam * 10 + s[i] - 48;
        }
        else
        {
            a[dem] = tam;
            dem++;
            tam = 0;
        }
    }

    dem--;
    
    for (int i = 1; i <= dem; i++)
    {
        if (a[i] != 0)
        {
            mina = min(mina, a[i]);
            maxa = max(maxa, a[i]);
        }
    }

    cout << mina << endl << maxa;
}