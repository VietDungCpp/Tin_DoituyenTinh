#include <iostream>

using namespace std;

int n;
int m;
int a[100000];
int kethop[100000];
int dem = 0;

void chongiohoa(int a[], int kethop[], int n, int m, int i, int j)
{
    if (j == m)
    {
        dem++;

        cout << dem << ". ";
        for (int k = 0; k < m; k++)
        {
            cout << kethop[k] << " ";
        }
        cout << endl;
        return;
    }

    if (i >= n)
    {
        return;
    }

    kethop[j] = a[i];

    chongiohoa(a, kethop, n, m, i + 1, j + 1);
    chongiohoa(a, kethop, n, m, i + 1, j);
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    chongiohoa(a, kethop, n, m, 0, 0);

    cout << dem;
}