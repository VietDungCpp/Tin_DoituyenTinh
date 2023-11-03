#include <iostream>

using namespace std;

int a, b, c, d;
double hieu;
int tu, mau;

int ucln(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return ucln(b, a % b);
}

int main()
{
    freopen("hieups.inp", "r", stdin);
    freopen("hieups.out", "w", stdout);

    cin >> a >> b >> c >> d;

    hieu = double(a * d - c * b) / (b * d);
    tu = a * d - c * b;
    mau = b * d;

    int uc = ucln(abs(tu), abs(mau));
    tu /= uc;
    mau /= uc;

    cout << tu << "/" << mau;

}
