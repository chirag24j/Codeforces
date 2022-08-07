#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, row[11] = {0}, col[11] = {0};
    cin >> r >> c;
    string s;
    for (int i = 0; i < r; i++)
    {
        cin >> s;
        for (int j = 0; j < c; j++)
        {
            if (s[j] == 'S')
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int cake = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (row[i] == 0 || col[j] == 0)
                cake++;
        }
    }
    cout << cake;
}