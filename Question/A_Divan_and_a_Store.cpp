#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            if (a <= r && a >= l)
                v.push_back(a);
        }
        sort(v.begin(), v.end());
        long long ans = 0;
        for (auto i : v)
        {
            if (i <= k)
            {
                k -= i;
                ans++;
            }
        }
        cout << ans << endl;
    }
}