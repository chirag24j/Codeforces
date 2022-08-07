#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int n = 12;
    int sum = 0, count = 0, temp = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    if (k > temp)
        cout << "-1";
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (k > sum)
            {
                sum += arr[i];
                count++;
            }
        }
        cout << count;
    }
}