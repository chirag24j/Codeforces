#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f = 0, z = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 5)
            f++;
        else if (arr[i] == 0)
            z++;
    }
    if (z == 0)
        cout << -1;
    else if (f < 9)
        cout << 0;
    else
    {
    xy:
        if (f % 9 == 0)
        {
            for (int i = 0; i < f; i++)
            {
                cout << 5;
            }
            for (int i = 0; i < z; i++)
            {
                cout << 0;
            }
        }
        else
        {
            f--;
            goto xy;
        }
    }
}
