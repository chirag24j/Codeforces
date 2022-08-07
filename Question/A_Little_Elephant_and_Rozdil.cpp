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
    int count = 0, min = arr[n - 1], temp = 0, output = n;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            output = i + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << output;
    }
    else
        cout << "Still Rozdil";
}