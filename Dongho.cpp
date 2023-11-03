#include <iostream>

using namespace std;

int n;

int main()
{
    cin >> n;

    int m = n % 12; // Khu viec quay nhieu vong. Vd: -13
    int gio = (12 + m) % 12;

    if (gio == 0)
    {
        gio = 12;
    } 

    cout << gio;
}