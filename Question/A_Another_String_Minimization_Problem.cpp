#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, m;
    cin >> n >> m;
    string s(m, 'B');
    while (n--)
    {
        int a;
        cin >> a;
        a--;
        a = min(a, m - 1 - a);
        if (s[a] == 'B')
            s[a] = 'A';
        else
            s[m - 1 - a] = 'A';
    }
    cout << s << endl;
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