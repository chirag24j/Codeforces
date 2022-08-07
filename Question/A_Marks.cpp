#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int count = 0;
    int max[m] = {0};
    int maxm = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] > maxm)
            {
                maxm = arr[j][i];
                max[i] = j;
            }
        }
    }
    for (int i = 0; i < m - 1; i++)
    {
        if (max[i] == max[i + 1])
            continue;
        else
            count++;
    }
    cout << count;
}