#include <iostream>

using namespace std;

int n;
long long sotien;

int main()
{
    cin >> n;

    if (n <= 1000)
    {
        sotien = 5550 * 1000;
    }
    if (n >= 1001 && n <= 2000)
    {
        sotien = 1000 * 5550 + (n - 1000) * 5450;
    }
    if (n >= 2001 || n <= 3000)
    {
        sotien = 1000 * 5550 + 1000 * 5450 + (n - 2000) * 5250;
    }
    else
    {
        sotien = 1000 * 5550 + 1000 * 5450 + 1000 * 5250 + (n - 3000) * 5000;
    }

    sotien = sotien + (10/100 * sotien);

    cout << sotien;
}