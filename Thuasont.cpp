#include <iostream>

using namespace std;

long long n;
int dem[1000005];
int dem1 = 0;
int i = 2;

int main()
{
    cin >> n;
    
    int tam = n;

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            dem[i]++;
            n /= i;
        }

        if (dem[i] != 0)
        {
            dem1++;
        }
    }

    cout << dem1 << endl;

    for (int i = 0; i < tam; i++)
    {
        if (dem[i] != 0)
        {
            cout << i << " " << dem[i] << endl;
        }
    }
}