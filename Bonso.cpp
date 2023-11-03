#include <iostream>
#include <algorithm>

using namespace std;

long m, n, p, q;
long a[5];

int main()
{
    cin >> m >> n >> p >> q;

    a[0] = m;
    a[1] = n;
    a[2] = p;
    a[3] = q;

    sort(a, a + 4);

    cout << a[3] * a[2] << " " << a[1] * a[0];
}