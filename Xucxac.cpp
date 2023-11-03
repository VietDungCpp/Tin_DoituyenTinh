#include <iostream>

using namespace std;

int n, t;

int main()
{
    freopen("Xucxac.inp", "r", stdin);
    freopen("Xucxac.out", "w", stdout);

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cout << 7 - n << endl;
    }
}