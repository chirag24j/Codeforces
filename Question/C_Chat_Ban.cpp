#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int k, x;
        cin >> k >> x;
        if (x % 2 == 0)
            cout << x / 2 << endl;
        else
            cout << (x + 1) / 2 << endl;
    }
}