#include <bits/stdc++.h>
using namespace std;
void banao()
{
    long long n, x, t;
    cin >> n >> x >> t;
    long long cnt = min((t / x), n);
    cout << (n - cnt) * cnt + ((cnt * (cnt - 1)) / 2) << endl;
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