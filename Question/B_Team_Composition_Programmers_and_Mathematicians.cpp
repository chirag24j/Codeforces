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
        long long int sum = a + b;
        long long int teams = floor(sum / 4);
        if (a < teams)
            cout << a << endl;
        else if (b < teams)
            cout << b << endl;
        else
            cout << teams << endl;
    }
}