#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != b[i])
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}