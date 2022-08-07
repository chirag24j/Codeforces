#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int count = 5;
    for (int i = sum + 1; i <= sum + 5; i++)
    {
        if (i % (n + 1) == 1)
        {
            count--;
        }
    }
    cout << count;
}