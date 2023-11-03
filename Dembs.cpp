#include <iostream>

using namespace std;

int t, l, r, a, b;
int dem;
int main()
{
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> l >> r >> a >> b;

        for (int j = l; j <= r; j++)
        {
            if (j % a == 0 || j % b == 0)
            {
                dem++;
            }
        }
        cout << dem;
        dem = 0;
    }    
}