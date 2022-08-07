#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int one, two, three;
    one = (k * l) / nl;
    two = c * d;
    three = p / np;
    cout << min(min(one, two), three) / n;
}