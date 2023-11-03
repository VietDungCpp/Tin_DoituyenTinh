#include <iostream>

using namespace std;

int n;
int dem = 0;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int tam = i;

        while (tam % 5 == 0)
        {
            tam /= 5;
            dem++;
        }
    }

    cout << dem;
}