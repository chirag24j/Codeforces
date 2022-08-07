#include <bits/stdc++.h>
using namespace std;
void banao()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1 && a[0] > 1)
    {
        cout << "NO\n";
        return;
    }
    else if (n == 1)
    {
        cout << "YES\n";
        return;
    }
    sort(a, a + n);
    if (abs(a[n - 1]) - abs(a[n - 2]) > 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    return;
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