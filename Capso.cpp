#include <iostream>

using namespace std;

int n, s;
int a[1000006];
int dem = 0;

int main()
{
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == s)
            {
                dem++;
            }
        }
    }

    cout << dem;
}