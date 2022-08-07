#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int ans = 0;
    ans += (m * (m + 1)) / 2;
    ans += m * (n * (n - 1)) / 2;
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
