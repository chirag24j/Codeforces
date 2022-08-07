#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
        }
        if (c1 == c0)
        {
            if (s[s.length() - 1] == '0')
                cout << c0 - 1 << "\n";
            else
                cout << c1 - 1 << "\n";
        }
        else
            cout << min(c0, c1) << "\n";
    }
}