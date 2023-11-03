#include <iostream>

using namespace std;

int a, b, n;
int s = 0;

int main()
{
    cin >> a >> b >> n;

    for (int i = 1; i <= n; i++)
    {
        s += a;
        a += b; 
    }

    cout << s;
}