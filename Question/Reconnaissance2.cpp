#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int new1 = 0, new2 = 0;
    int diff = abs(arr[0] - arr[1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (diff > abs(arr[i] - arr[i + 1]))
        {
            diff = abs(arr[i] - arr[i + 1]);
            new1 = i + 1;
            new2 = i + 2;
        }
    }
    if (diff > abs(arr[0] - arr[n - 1]))
    {
        new2 = 1;
        new1 = n;
    }
    if (diff == abs(arr[0] - arr[1]))
    {
        cout << "1 2";
    }
    else
    {
        cout << new1 << " " << new2;
    }
}
