#include <iostream>

using namespace std;

int a, b, k;
int s = 0;
int dem = 0;
int main()
{
    cin >> a >> b >> k;

    for (int i = a + 1; i <= b - 1; i++)
    {
        if (i % 2 == 0)
        {
            dem++;
            s += i;
        }
    }

    if (dem == 0)
    {
        cout << 0;
    }
    else
    {
        cout << s;
    }    
}