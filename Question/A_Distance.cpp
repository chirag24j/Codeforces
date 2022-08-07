#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0 && y % 2 == 0)
            cout << x / 2 << " " << y / 2 << endl;

        else if ((x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0))
            cout << "-1 -1" << endl;
        else
        {
            if (x < y)
                cout << x << " " << (y - x) / 2 << endl;
            else
                cout << (x - y) / 2 << " " << y << endl;
        }
    }
}