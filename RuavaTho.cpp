#include <iostream>
#include <cmath>

using namespace std;

int a, b, s;

int main()
{
    cin >> a >> b >> s;

    if (a == 0 && b == 0)
    {
        cout << (s%2 == 0 ? "Yes" : "No") << endl;
    }
    else
    {
        cout << (s%(abs(a) + abs(b)) == 0 ? "Yes" : "No") << endl;
    }
}