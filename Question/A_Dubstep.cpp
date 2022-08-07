#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, output;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n;)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            i += 3;
        else
        {
            output += s[i];
            i++;
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
                output += ' ';
        }
    }
    cout << output;
}