#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int a, b, c;
    string s1 = "1", s2 = "1";
    cin >> a >> b >> c;
    if (a == 1 && b == 1 && c == 1)
    {
        cout << "1"
             << " "
             << "1" << endl;
        return;
    }
    for (int i = 0; i < a - 1; i++)
    {
        s1 += '0';
    }
    for (int i = 0; i < b - 1; i++)
    {
        s2 += '0';
    }
    if (c == 1)
    {
        int temp2 = min(a, b);
        if (temp2 == a)
        {
            s2[s2.length() - 1] = '1';
        }
        else
            s1[s1.length() - 1] = '1';
    }
    else if (c == a)
    {
        s2[0] = '2';
    }
    else if (c == b)
    {
        s1[0] = '2';
    }
    else
    {
        int temp = min(a, b);
        if (temp == a)
        {
            s2[s2.length() - c] = '1';
        }
        else
            s1[s1.length() - c] = '1';
    }
    cout << s1 << " " << s2 << endl;
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