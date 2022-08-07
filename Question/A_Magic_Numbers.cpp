#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[0] == '4')
        {
            cout << "NO";
            count++;
            break;
        }
        else if (s[i] != '4' && s[i] != '1')
        {
            cout << "NO";
            count++;
            break;
        }
        else if (i >= 1 && s[i] == '4')
        {
            if (i == 1)
            {
                if (s[i - 1] != '1')
                {
                    cout << "NO";
                    count++;
                    break;
                }
            }
            else if (s[i - 1] != '1' && s[i - 2] != '1')
            {
                cout << "NO";
                count++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (count == 0)
    {
        cout << "YES";
    }
}