#include <bits/stdc++.h>
using namespace std;
void banao()
{
    string s;
    cin >> s;

    int ans = 0;
    ans += (s[0] - 'a') * 25;
    ans += (s[1] - 'a');
    if (s[0] - 'a' > s[1] - 'a')
        ans++;
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