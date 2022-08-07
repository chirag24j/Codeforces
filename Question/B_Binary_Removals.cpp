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
        int pos = -1;
        bool left = false, right = false;
        for (int i = 0; i < s.length() - 1; i++)
        {

            if (s[i] == '1' && s[i + 1] == '1')
            {
                pos = i + 2;
                left = true;
                break;
            }
        }
        for (int i = pos; i < s.length() - 1; i++)
        {

            if (s[i] == '0' && s[i + 1] == '0')
            {
                pos = i + 2;
                right = true;
                break;
            }
        }
        if (left && right)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}