#include <iostream>

using namespace std;

int n, k;
int a[100000];
int tam = 0;
int ngay = 0;

int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (tam <= k)
    {
        ngay++;
        tam++;
    }

    cout << ngay;
}