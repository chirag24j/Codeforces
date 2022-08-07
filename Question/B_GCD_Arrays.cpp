#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, k;
        cin >> l >> r >> k;
        if (l == 1 && r == 1)
        {
            cout << "NO" << endl;
        }
        else if (k == 0 && l == r)
            cout << "YES" << endl;
        else
        {
            int count = 0;
            count = (r - l) / 2;
            if (r % 2 != 0 || l % 2 != 0)
                count += 1;
            if (count > k)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}