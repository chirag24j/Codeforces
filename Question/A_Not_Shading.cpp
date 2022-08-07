#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c, flag = 0, count = 0;
        cin >> n >> m >> r >> c;
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'W')
                    count++;
            }
        }
        r--, c--;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (r == i && arr[i][j] == 'B')
                    flag = 1;
                else if (c == j && arr[i][j] == 'B')
                    flag = 1;
            }
        if (arr[r][c] == 'B')
            cout << "0" << endl;
        else if (flag == 1)
            cout << "1" << endl;
        else if (count == (n * m))
            cout << "-1" << endl;
        else
            cout << "2" << endl;
    }
}
