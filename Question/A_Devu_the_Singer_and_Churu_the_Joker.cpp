#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, sum = 0;
    cin >> n >> d;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        sum += t[i];
    }
    d -= sum;
    if (d % 5 == 0)
        cout << d / 5;
    else
        cout << "-1";
}