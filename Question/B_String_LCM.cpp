#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
void banao()
{
    string s, t;
    cin >> s >> t;
    int ls, lt;
    ls = s.length();
    lt = t.length();
    string temp = s;
    int temp2 = (ls * lt) / gcd(lt, ls);
    while (ls < temp2)
    {
        s += temp;
        ls = s.length();
    }
    temp = t;
    while (lt < temp2)
    {
        t += temp;
        lt = t.length();
    }
    if (s == t)
        cout << s << endl;
    else
        cout << "-1" << endl;
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