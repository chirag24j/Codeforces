#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            count++;
            if (count == 6)
            {
                cout << "YES";
                break;
            }
        }
        else if (s[i] == '0' && s[i + 1] == '0')
        {
            count++;
            if (count == 6)
            {
                cout << "YES";
                break;
            }
        }
        else
            count = 0;
    }
    if (count == 0)
        cout << "NO";
}