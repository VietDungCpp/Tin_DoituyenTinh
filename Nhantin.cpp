#include <iostream>

using namespace std;

int n, t;

int main()
{
    freopen("Nhantin.inp", "r", stdin);
    freopen("Nhantin.out", "w", stdout);
    
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cout << n * (n - 1) << endl;
    }
}