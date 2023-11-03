#include <iostream>

using namespace std;

int n, a[100000];
int t = 0;
int tmax = 0;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        t += a[i];
    }

    for (int i = 3; i < n; i++)
    {
        t += a[i];
        t -= a[i - 3];

        if (t > tmax)
        {
            tmax = t;
        }
    }
    cout << tmax;
}