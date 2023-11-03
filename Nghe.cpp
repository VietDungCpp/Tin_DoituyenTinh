#include <iostream>

using namespace std;

int n;
int minn = 9999999;
bool nghiem = false;

int main()
{
    cin >> n;

    if ((n % 3) % 5 == 0)
    {
        nghiem = true;
        minn = min(minn, (n / 3) + (n % 3) / 5);
    }
    if ((n % 5) % 3 == 0)
    {
        nghiem = true;
        minn = min(minn, (n / 5) + (n % 5) / 3); 
    }
    if (n % 3 == 0)
    {
        nghiem = true;
        minn = min(minn, n / 3);
    }
    if (n % 5 == 0)
    {
        nghiem = true;
        minn = min(minn, n / 5);
    }

    if (nghiem == false)
    {
        cout << -1;
    }
    else
    {
        cout << minn;
    }
}