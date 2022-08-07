#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c = 1, d = 2;
    while (d < n)
    {
        a = b;
        b = c;
        c = d;
        d = c + b;
    }
    if (d == n)
    {
        cout << a << " " << b << " " << b;
    }
    else if (n == 0)
    {
        cout << "0 0 0";
    }
    else if (n == 1)
    {
        cout << "0 0 1";
    }
}