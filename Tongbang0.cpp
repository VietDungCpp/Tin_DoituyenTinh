#include <iostream>

using namespace std;

int n, a[100006];
int dem = 0;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            int sum = 0;
            
            for (int k = 0; k < i; k++)
            {
                sum += a[j + k];
            }

            if (sum == 0)
            {
                dem++;
            }
        }
    }

    cout << dem;
}