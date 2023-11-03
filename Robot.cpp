#include <iostream>

using namespace std;

long long a, b, c, d;

int main()
{
    cin >> a >> b >> c >> d;

    cout << max(abs(a - c), abs(b - d));
}