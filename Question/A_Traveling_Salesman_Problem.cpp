#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int ans = 0;
    if (x[n - 1] > 0)
        ans += 2 * x[n - 1];
    if (x[0] < 0)
        ans += 2 * abs(x[0]);
    if (y[n - 1] > 0)
        ans += 2 * y[n - 1];
    if (y[0] < 0)
        ans += 2 * abs(y[0]);
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
