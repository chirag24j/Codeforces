#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = INT_MAX, temp, max = INT_MIN;
    for (int i = 0; i < n - 2; i++)
    {
        temp = a[i + 1];
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j + 1] == temp)
            {
                if (max < a[j + 2] - a[j])
                    max = a[j + 2] - a[j];
            }
            else if (a[j] == temp)
                continue;
            else if (max < a[j + 1] - a[j])
                max = a[j + 1] - a[j];
        }
        if (min > max)
            min = max;
        max = INT_MIN;
    }
    cout << min;
}