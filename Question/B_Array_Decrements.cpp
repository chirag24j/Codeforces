#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    if (a[0] < b[0])
    {
        cout << "NO\n";
        return;
    }
    int diff = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
            diff = min(diff, a[i] - b[i]);
    }
    if (diff < 0)
    {
        cout << "NO\n";
        return;
    }
    else if (diff == INT_MAX)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] - b[i] > diff)
        {
            cout << "NO\n";
            return;
        }
        if (b[i] != 0 && a[i] - b[i] < diff)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES" << endl;
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
