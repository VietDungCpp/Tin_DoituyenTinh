#include <iostream>
#include <string>

using namespace std;

string s1;
string s2;
int dem1 = 0, dem2 = 0;

int main()
{
    cin >> s1 >> s2;

    string tam = s1;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1.find(s2) != -1)
        {
            dem1++;
            s1.erase(s1.find(s2), s2.size());
        }   
    }

    for (int i = 0; i < tam.size();i++)
    {
        if (tam.substr(i, s2.size()) == s2)
        {
            dem2++;
        } 
    }

    cout << dem1 << endl << dem2;
}