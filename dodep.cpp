#include <iostream>
#include <algorithm>

using namespace std;

long long n;
long long a[1000000];
long long maxa = 0;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
    {
        maxa = max(maxa, a[i + 2] - a[i]);
    }

    cout << maxa;
}