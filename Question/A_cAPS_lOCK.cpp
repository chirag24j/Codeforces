#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char s1;
    bool temp = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
            temp = false;
    }
    if (temp)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]))
                s1 = toupper(s[i]);
            else
                s1 = tolower(s[i]);
            cout << s1;
        }
    }
    else
        cout << s;
}