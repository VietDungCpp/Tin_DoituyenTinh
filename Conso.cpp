#include <iostream>

using namespace std;

int t, x, y, n;

int main()
{
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y >> n;

        if (n % 2 == 1)
        {
            x *= 2;
        }
        else
        {
            y *= 2;
        }

        cout << max(x, y) / min(x, y) << endl;
    }
}