#include <iostream>

using namespace std;

int n, m;

int main()
{
    cin >> n >> m;

    int sobuoc = -1;

    for (int i = n/2; i > 0; i--)
    {
        sobuoc = i + (n%(2*i));

        if (sobuoc % m == 0)
        {
            cout << sobuoc;
            return 0;
        }
    }
    cout << -1;
}