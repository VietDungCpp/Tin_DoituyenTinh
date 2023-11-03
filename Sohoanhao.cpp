#include <iostream>

using namespace std;

int k;

int tongcs(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 10 + tongcs(n / 10);
}

int xuly(int k)
{
    int a[k];
    int b = 0;
    int kq, tam1;

    for (int i = 1; b != k; i++)
    {
        kq = 0;
        tam1 = i;

        kq = tongcs(tam1);
        
        if (kq == 10)
        {
            a[b] = i;
            b++;
        }
    }

    return a[k - 1];
}

int main()
{
    cin >> k;

    cout << xuly(k);
}