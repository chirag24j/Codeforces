#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x1, x2, y1, y2, flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == '*')
            {
                if (flag == 0)
                {
                    x1 = i;
                    y1 = j;
                    flag = 1;
                }
                else
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }
    if (x1 == x2)
    {
        if (x1 == n - 1)
        {
            arr[x1 - 1][y1] = '*';
            arr[x2 - 1][y2] = '*';
        }
        else
        {
            arr[x1 + 1][y1] = '*';
            arr[x2 + 1][y2] = '*';
        }
    }
    else if (y1 == y2)
    {
        if (y1 == n - 1)
        {
            arr[x1][y1 - 1] = '*';
            arr[x2][y2 - 1] = '*';
        }
        else
        {
            arr[x1][y1 + 1] = '*';
            arr[x2][y2 + 1] = '*';
        }
    }
    else
    {
        arr[x1][y2] = '*';
        arr[x2][y1] = '*';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        banao();
    }
}