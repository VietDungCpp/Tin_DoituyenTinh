#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string s1;
string s2;
vector<string> s;

int main()
{
    getline(cin, s1);

    stringstream ss(s1);

    while (ss >> s2)
    {
        s.push_back(s2);
    }

    sort(s.begin(), s.end());

    cout << s.size() << endl;

    for (auto i : s)
    {
        cout << i << " ";
    }
}
