#include <iostream>

using namespace std;

int n[1000], x[1000], t;

int main()
{
    freopen("Khambenh.inp", "r", stdin);
    freopen("Khambenh.out", "w", stdout);
    
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n[i];
        cin >> x[i];
    }

    cout << endl;
    
    for (int i = 1; i <= t; i++)
    {
        cout << x[i] + 10 * (n[i] - 1) - (x[i] * n[i]) << endl; 
    }
}