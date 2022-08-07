#include <bits/stdc++.h>
using namespace std;
void banao()
{
    string str;
    cin >> str;
    set<char> s;
    int ans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
        if (s.size() > 3)
        {
            ans++;
            s.clear();
            s.insert(str[i]);
        }
    }
    if (!s.empty())
        ans += 1;
    cout << ans << endl;
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
