#include <iostream>
#include <algorithm>

using namespace std;

int t, n, a[10000], b[10000];

int main()
{
    freopen("Conchuot.inp", "r", stdin);
    freopen("Conchuot.out", "w", stdout);
    
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }    
    }

    sort(a, a + n);
    sort(b, b + n);

    int kq = abs(a[0] - b[0]);

    for (int i = 1; i < n; i++)
    {
        kq = max(kq, abs(a[i] - b[i]));
    }

    cout << kq;
}