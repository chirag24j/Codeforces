#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int x[p], freq[n] = {0};
    for (int i = 1; i <= p; i++)
    {
        cin >> x[i];
        freq[x[i]] = 1;
    }
    int q;
    cin >> q;
    int y[q];
    for (int i = 1; i <= q; i++)
    {
        cin >> y[i];
        freq[y[i]] = 1;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += freq[i];
    }
    if (count == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}