#include <bits/stdc++.h>
using namespace std;
void banao()
{
    string s;
    cin >> s;
    int temp1 = 0, temp2 = 1;
    char c = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == c)
            temp2++;
        else
        {
            if (temp2 < 2)
            {
                temp1 = 1;
            }
            temp2 = 1;
            c = s[i];
        }
    }
    if (temp2 < 2)
        temp1 = 1;
    if (temp1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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