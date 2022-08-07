#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        int p = s.length();
        if (p > 10)
        {
            string output;
            output += s[0];
            output += to_string(p - 2);
            output += s[p - 1];
            cout << output << endl;
        }
        else
            cout << s << endl;
    }
}