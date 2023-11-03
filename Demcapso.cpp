#include <iostream>

using namespace std;

int t, k;
int dem = 0;

int main()
{
    freopen("Demcapso.inp", "r", stdin);
    freopen("Demcapso.out", "w", stdout);
    
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> k;

        for (int a = 1; a < k; a++)
        {
            for (int b = a + 1; b <= k - a; b++)
            {
                if (a + b <= k)
                {
                    dem++;
                }
            }
        }
        cout << dem << endl;
        dem = 0;
    }
}
