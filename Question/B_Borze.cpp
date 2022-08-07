#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-' && s[i + 1] == '-')
        {
            temp += '2';
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            temp += '1';
            i++;
        }
        else if (s[i] == '.')
        {
            temp += '0';
        }
    }
    cout << temp;
}
