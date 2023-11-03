#include <iostream>

using namespace std;

int n, a[1000006];
int maxa = 0;
int dem = 0;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (maxa < a[i])
        {
            maxa = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxa)
        {
            dem++;
        }
    }
    cout << dem;
}