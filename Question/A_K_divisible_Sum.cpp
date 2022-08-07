#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, k;
    cin >> n >> k;
    if (n > k)
    {
        long long temp = n / k;
        temp *= k;
        if (temp < n)
        {
            temp += k;
        }

        k = temp;
    }
    long long temp = k % n;
    if (temp == 0)
    {

        cout << (k / n) << "\n";
    }
    else
    {
        cout << (k / n) + 1 << "\n";
    }
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