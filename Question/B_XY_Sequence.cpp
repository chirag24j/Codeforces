#include <bits/stdc++.h>
using namespace std;
void banao()
{
    long long n, b, x, y;
    cin >> n >> b >> x >> y;
    vector<long long> v;
    long long temp = 0;
    v.push_back(temp);
    for (int i = 1; i < n + 1; i++)
    {
        if (v[i - 1] + x <= b)
        {
            temp = v[i - 1] + x;
            v.push_back(temp);
        }
        else
        {
            temp = v[i - 1] - y;
            v.push_back(temp);
        }
    }
    long long sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    cout << sum << endl;
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