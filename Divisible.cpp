#include <iostream>

using namespace std;

unsigned long long t, n[1000000];

int main()
{
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (n[i] % 9 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}