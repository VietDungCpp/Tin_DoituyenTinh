#include <iostream>
#include <string>

using namespace std;

string s;
int dem = 0;
int demtu = 1;
int maxdt = 1;
int pos = 0;

int main()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i + 1] != s[i])
        {
            dem++;
        }

        if (s[i] == s[i + 1])
        {
            demtu++;
        }
        else
        {
            if (demtu > maxdt)
            {
                maxdt = demtu;
                pos = i;
            }

            demtu = 1;
        }
    }

    cout << dem << endl;
    cout << s[pos] << " " << maxdt;
}