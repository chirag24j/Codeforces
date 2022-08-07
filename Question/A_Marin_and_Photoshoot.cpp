#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                ans += 2;
            }
            else if (s[i] == '0' && s[i + 1] == '1' && i < n - 2 && s[i + 2] == '0')
            {
                ans++;
            }
        }
    }
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