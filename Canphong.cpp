#include <iostream>
#include <cmath>

using namespace std;

int n, a, b;

int main()
{
    cin >> n >> a >> b;

    if (a*b >= 6*n)
    {
        cout << a * b << endl;
        cout << a << " " << b;
    }
    else
    {
        while (a*b < 6*n)
        {
            b++;
        }
        cout << a * b << endl;
        cout << a << " " << b;
    }
}