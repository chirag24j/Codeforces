#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        bool temp = true;
        for (int i = 0; i < n; i++)
        {
            if (abs(b[i] - a[i] == 1) || abs(b[i] - a[i] == 0))
                continue;
            else
                temp = false;
        }
        if (temp)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}