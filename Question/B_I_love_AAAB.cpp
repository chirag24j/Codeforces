#include <bits/stdc++.h>
using namespace std;
void banao()
{
    string s;
    cin >> s;
    int temp = 0;
    if (s[s.length() - 1] != 'B')
    {
        cout << "NO\n";
        return;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
                temp++;
            else
                temp--;
            if (temp < 0)
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        banao();
    }
}

/*
AABB
*/