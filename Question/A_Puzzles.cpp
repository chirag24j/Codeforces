#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int min = 10001, max = 0, count = 10001;
    for (int i = 0; i < m - n + 1; i++)
    {
        for (int j = i; j < i + n; j++)
        {
            if (arr[j] > max)
                max = arr[j];
            if (arr[j] < min)
                min = arr[j];
        }
        if (max - min <= count)
            count = max - min;
        min = 10001;
        max = 0;
    }
    cout << count;
}
