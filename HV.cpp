#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[1000000];
int b[1000000];
int dachon[1000000];
int mangsohv[1000000];
int so, n, m;
int v = 0;
void tachso(int n);
int ghepso(int a[], int n);
void hv(int i);
bool cmp(int x, int y);
int demcs(int n);

void tachso(int n)
{
    if (n == 0)
    {
        return;
    }
    a[--m] = n % 10;
    tachso(n / 10);
}

int ghepso(int a[], int n)
{
    int sohv = 0;
    for (int i = 0; i < n; i++)
    {
        sohv += a[i] * pow(10, n - i - 1);
    }
    return sohv;
}

void hv(int i)
{
    if (i == n)
    {
        mangsohv[v++] = ghepso(b, n);
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            if (dachon[j] == 0)
            {
                dachon[j] = 1;
                b[i] = a[j];
                hv(i + 1);
                dachon[j] = 0;
            }
        }
    }
}

bool cmp(int x, int y)
{
    return x > y;
}

int demcs(int n)
{
    if (n < 10)
    {
        return 1;
    }

    return 1 + demcs(n / 10);
}

int main()
{
    freopen("HV.inp", "r", stdin);
    freopen("HV.out", "w", stdout);
    
    cin >> so;
    n = demcs(so); 
    m = n;

    tachso(so);

    for (int i = 0; i < n; i++)
    {
        dachon[i] = 0;
    }

    int p = 1;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        p *= a[i];
        s += a[i];
    }

    if ((p != 0) || (s % 3 != 0))
    {
        cout << -1;
    }
    else
    {
        hv(0);
    }

    sort(mangsohv, mangsohv + v, cmp);

    for (int i = 0; i < v; i++)
    {
        if (mangsohv[i] % 30 == 0)
        {
            cout << mangsohv[i];
            break;
        }
    }
}