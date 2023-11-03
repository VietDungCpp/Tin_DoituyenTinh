#include <iostream>
#include <algorithm>

using namespace std;

int n, a[100000];

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    cout << a[n - 1] << endl << a[0] << endl << a[n - 1] - a[0];
}