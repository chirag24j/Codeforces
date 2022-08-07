#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n = 0, k = 0;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            cout << (2 * k - 1);
        }
        else if (k > n / 2)
        {
            cout << 2 * (k - (n / 2));
        }
    }
    else if (n % 2 != 0)
    {
        if (k <= ceil(n / (2 * 1.0)))
        {
            cout << (2 * k - 1);
        }
        else if (k > ceil(n / 2 * 1.0))
        {
            long long int temp = k - ceil(n / (2 * 1.0));
            cout << 2 * temp;
        }
    }
}