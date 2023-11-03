#include <iostream>

using namespace std;

double t, a[1000000], b[1000000], c[1000000];

int main()
{
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (a[i] + b[i] + c[i] == 180)
        {
            if ((a[i] == 90) || (b[i] == 90) || (c[i] == 90))
            {
                cout << "VUONG" << endl;
            }
            else if ((a[i] > 90) || (b[i] > 90) || (c[i] > 90))
            {
                cout << "TU" << endl;
            }
            else
            {
                cout << "NHON" << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
}