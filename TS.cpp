#include <iostream>

using namespace std;

int m, n, k;

int main()
{
    cin >> n;

    for(int i = 9; i > 1; i--)
    {
        while(n % i == 0 && n > 1)
        {
            k = k * 10 + i;
            n /= i;
        }
    }

    while (k > 0)
    {
        int tam = k % 10;
        m = m * 10 + tam;
        k /= 10;
    }

    if (n > 1)
    {
        cout << -1;
    }
    else
    {
        cout << m;
    }
}