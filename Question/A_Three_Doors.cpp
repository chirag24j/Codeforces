#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int x;
    cin >> x;
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    if (v[x - 1] == 0 || v[v[x - 1] - 1] == 0)
        cout << "NO\n";
    else
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
