#include <iostream>

using namespace std;

long long n, a[10000006], b[10000006];
int ld;
int dem = 1;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ld = a[n - 1];
    b[n - 1] = true;

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= ld)
        {
            ld = a[i];
            b[i] = true;
            dem++;
        }
    }
    
    cout << dem << endl;
    
    for (int i = 0; i < n; i++)
    {
        if (b[i] == true)
        {
            cout << a[i] << " ";
        }
    }
}
