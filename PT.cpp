#include <iostream>

using namespace std;

long long n;
int dem = 0;

long long PT(long long n)
{
    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j <= n/i + 1; j++)
        {
            if (i*j + (i*(i-1)/2) == n)
            {
                dem++;
            }
        }
    }

    return dem;
}

int main()
{
    while (cin >> n)
    {
        cout << PT(n) << endl;
        dem = 0;
    }
}