#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }
    int odd = 0;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] % 2 != 0)
            odd++;
    }
    if (odd > 1)
        cout << "Second";
    else
        cout << "First";
}