#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int min = INT_MAX;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] < min)
                    min = arr[i][j];
            }
            if (i != n - 1)
            {
                int temp = arr[i][i + 1];
                arr[i][i + 1] = arr[i][i];
                arr[i][i] = temp;
            }
            else
            {
                int temp = arr[i][i - 1];
                arr[i][i - 1] = arr[i][i];
                arr[i][i] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
}