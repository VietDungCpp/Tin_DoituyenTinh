#include <iostream>
#include <algorithm>

using namespace std;

int k, a[1000000];

int main()
{
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    int n = a[0];

    for (int i = 1; i < k; i++)
    {
        n = __gcd(n, a[i]);
    }

    cout << n;
}