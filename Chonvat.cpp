#include <iostream>
#include <algorithm>

using namespace std;

int m, n;
int a[101];
int tam[101];
int t = 0;
int vt;

int main()
{
    cin >> m >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tam[i] = a[i];
    }

    sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; i++)
    {
        t += a[i];
        if (t > m)
        {
            t -= a[i];
            i--;
            vt = i;
            break;
        }
    }

    cout << t << endl;

    for (int j = 1; j <= n; j++)
    {
        for (int k = 1; k <= vt; k++)
        {
            if (tam[j] == a[k])
            {
                cout << j << " ";
            }
        }
    }
}