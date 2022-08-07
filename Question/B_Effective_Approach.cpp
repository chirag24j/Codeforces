#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int start = 0, end = 0, temp1 = 0, temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            start++;
            if (arr[i] == b[j])
            {
                temp1++;
                break;
            }
        }
        if (temp1 == m)
            break;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            end++;
            if (arr[i] == b[j])
            {
                temp2++;
                break;
            }
        }
        if (temp2 == m)
            break;
    }
    cout << start << " " << end;
}