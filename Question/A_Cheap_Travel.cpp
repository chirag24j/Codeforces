#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, cost = 0;
    cin >> n >> m >> a >> b;
    if (m * a > b)
    {
        int y = n / m;
        cost = y * b + min((n % m) * a, b);
    }
    else
        cost = a * n;
    cout << cost;
}