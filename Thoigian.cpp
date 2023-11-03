#include <iostream>

using namespace std;

int x;
int gio, phut, giay;

int main()
{
    cin >> x;

    if (x < 0 || x > 86400)
    {
        cout << "Gia tri " << x << " khong hop le"; 
    }
    else
    {
        gio = x / 3600;
        x %= 3600;
        phut = x / 60;
        x %= 60;

        if (gio < 10)
        {
            cout << "0" << gio << ":";
        }
        else
        {
            cout << gio;
        }

        if (phut < 10)
        {
            cout << "0" << phut << ":";
        }
        else
        {
            cout << phut << ":";
        }

        if (x < 10)
        {
            cout << "0" << x;
        }
        else
        {
            cout << x;
        }
    }
}