#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp = 0, count = 0;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ceil(arr[i] / (1.0 * m));
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == max)
        {
            cout << i + 1;
            break;
        }
    }
}