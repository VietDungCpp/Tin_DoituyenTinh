#include <iostream>

using namespace std;

int n;

int xuly(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }

    return xuly(n - 1) + xuly(n - 2);
}

int main()
{
    cin >> n;

    cout << xuly(n) << endl;

    if (n % 2 == 0)
    {
        cout << n / 2 - 1;
    }
    else
    {
        cout << n / 2;
    }
}