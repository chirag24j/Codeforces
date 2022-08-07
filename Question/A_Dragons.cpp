#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, a, b, count = 0;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (s > v[i].first)
            s += v[i].second;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}