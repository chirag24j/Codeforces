#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    if (n >= m)
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if ((i * i + j) == n && (j * j + i == m))
                {
                    count++;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if ((i * i + j) == n && (j * j + i == m))
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}