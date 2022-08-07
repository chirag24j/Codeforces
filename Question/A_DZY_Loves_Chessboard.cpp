#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, row, col;
    cin >> n >> m;
    char output[n][m];
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.' && (j + i) % 2 == 0)
            {
                cout << "B";
            }
            else if (arr[i][j] == '.')
            {
                cout << "W";
            }
            else
                cout << "-";
        }
        cout << endl;
    }
}
