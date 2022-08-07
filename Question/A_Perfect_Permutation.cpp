#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    if (n % 2 != 0)
        cout << "-1";
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            arr[i] += 1;
            arr[i + 1] -= 1;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}