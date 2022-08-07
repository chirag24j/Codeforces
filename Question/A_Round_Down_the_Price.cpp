#include <bits/stdc++.h>
using namespace std;
void banao()
{
    string s;
    cin >> s;
    long long n;
    n = stoi(s);
    long long ans = n - pow(10, (s.length() - 1));
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
