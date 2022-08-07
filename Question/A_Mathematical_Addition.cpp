#include <bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(long long int a, long long int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int u, v;
        cin >> u >> v;
        cout << -(u * u) << " " << v * v << endl;
    }
}