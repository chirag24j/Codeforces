#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long int r;
    int count = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        if (r == 4 || r == 7)
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}