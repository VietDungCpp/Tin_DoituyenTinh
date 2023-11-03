#include <iostream>

using namespace std;

string s;
string s1, s2;
int maxd = 0;

int main()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            if (s1.size() > maxd)
            {
                maxd = s1.size();
                s2 = s1;
            }
            s1.clear();
        }
        else
        {
            s1 += s[i];   
        }
    }

    cout << "do dai xau: " << maxd << endl;
    cout << "xau ket qua: " << s2;
}