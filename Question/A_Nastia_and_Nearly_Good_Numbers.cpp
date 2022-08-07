#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            long long int z = a * b + a;
            long long int y = a * b;
            long long int x = a;
            cout << x << " " << y << " " << z << endl;
        }
    }
}