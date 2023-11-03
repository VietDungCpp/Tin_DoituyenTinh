#include <iostream>

using namespace std;

int m, n, k;
int nhom;
int p, q, d, l;

int main()
{
    cin >> m >> n >> k;

    p = m / 2;
    q = n;
    nhom = min(p, q);
    d = m + n - 3 * nhom;

    if (d < k)
    {
        l = k - d;
        nhom = nhom - l / 3;

        if (l % 3 != 0)
        {
            nhom--;
        }
    }
    
    cout << nhom;
}