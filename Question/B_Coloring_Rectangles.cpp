#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int area = n * m;
        if (area % 3)
            cout << area / 3 + 1 << endl;
        else
            cout << area / 3 << endl;
    }
}