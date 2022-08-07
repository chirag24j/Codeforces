#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string final;
    cin >> s;
    int countuc = 0, countlc = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (65 <= s[i] && s[i] <= 90)
        {
            countuc++;
        }
        else
        {
            countlc++;
        }
    }
    char a[n + 1];
    strcpy(a, s.c_str());
    if (countuc > countlc)
    {
        final = strupr(a);
    }
    else if (countlc < countuc)
    {
        final = strlwr(a);
    }
    else
        final = strlwr(a);
    cout << final;
}