#include <bits/stdc++.h>
using namespace std;
int cost(string &a, string &b)
{
    int val = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        val += abs(a[i] - b[i]);
    }
    return val;
}
void banao()
{
    int n, m;
    cin >> n >> m;
    string temp;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            ans = min(ans, cost(s[i], s[j]));
        }
    }
    cout << ans << "\n";
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