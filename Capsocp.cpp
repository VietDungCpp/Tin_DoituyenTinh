#include <iostream>
#include <cmath>

using namespace std;

int n;

bool scp(int n)
{
    int m = sqrt(n);
    return m * m == n;
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int tam = i * i + j * j;

            if (scp(tam))
            {
                cout << i << " " << j << endl;
            }
        }
    }
}