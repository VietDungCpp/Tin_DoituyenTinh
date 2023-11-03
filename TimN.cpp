#include <iostream>
#include <iomanip>

using namespace std;

bool kt(int n)
{
    if (n == 0) return true;
    if (n % 10 != 4 && n % 10 != 7) return false;

    return kt(n / 10);
}

int main()
{
    int t, a[1000];
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < t; i++)
    {
        int dem = 0;
        int so = 4;

        while (so >= 4)
        {
            if (kt(so)) dem++;
            if (dem == a[i])
            {
                cout << so << endl;
                break;
            }
            else
            {
                so++;
            }
        }
    }
}