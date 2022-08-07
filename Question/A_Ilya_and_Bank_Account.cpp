#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    if (n >= 0)
        cout << n;
    else
    {
        int temp = n / 10;
        int temp2 = n / 100 * 10 + n % 10;
        cout << max(temp, temp2);
    }
}