#include <iostream>

using namespace std;

long d, x, y;
long dem = 0;
long a;
long b;

int main()
{
    freopen("buocnhay.inp", "r", stdin);
    freopen("buocnhay.out", "w", stdout);
    
    cin >> d >> x >> y;

    a = x;
    b = y;
    y = d;
    x = 0;

    while (x < y)
    {
        dem++;
        y += b;
        x += a;
    }

    cout << dem;
}