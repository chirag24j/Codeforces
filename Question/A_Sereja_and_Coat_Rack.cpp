#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int m, output = 0;
    cin >> m;
    if (m > n)
    {
        output = sum - d * (m - n);
    }
    else
    {
        sort(a, a + n);
        for (int i = 0; i < m; i++)
        {
            output += a[i];
        }
    }
    cout << output;
}