#include <iostream>
#include <algorithm>

using namespace std;

int n, a[10000];

int main()
{
    freopen("quayso.inp", "r", stdin);
    freopen("quayso.out", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int dem = 1;
    int maxd = 1;
    int sotrungthuong = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] == a[i])
        {
            dem++;
            if (dem > maxd)
            {
                maxd = dem;
                sotrungthuong = a[i];
            }
        } 
        else 
        {
            dem = 1;
        }
    }

    cout << sotrungthuong << endl;
}
