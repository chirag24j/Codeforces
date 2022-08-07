#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int k;
    cin >> k;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < k; i++)
    {
        if (a[i] % a[0] != 0)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
