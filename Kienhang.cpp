#include <iostream>

using namespace std;

int n, x, a[1000000];
int t = 0;
int dem = 0;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        t += a[i];
    }

    x = t / n;

    if (t % n != 0)
    {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            dem += a[i] - x;
        }
    }

    cout << dem;
}