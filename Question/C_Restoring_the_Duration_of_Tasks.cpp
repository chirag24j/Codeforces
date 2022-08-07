#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int s[n], f[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> f[i];
    int temp = 0, d[n];
    for (int i = 0; i < n; i++)
    {
        temp = max(temp, s[i]);
        d[i] = f[i] - temp;
        temp = f[i];
    }
    for (int i = 0; i < n; i++)
        cout << d[i] << " ";
    cout << "\n";
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
