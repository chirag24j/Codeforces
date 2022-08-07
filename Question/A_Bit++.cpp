#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[2] == '+' || s[0] == '+')
            count++;
        else if (s[2] == '-' || s[0] == '-')
            count--;
    }
    cout << count;
}