#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string str;
    cin >> str;
    int n = 0, w = 0, e = 0, s = 0;
    for (int i = 0; i < t; i++)
    {
        if (str[i] == 'N')
            n++;
        else if (str[i] == 'S')
            s++;
        else if (str[i] == 'E')
            e++;
        else if (str[i] == 'W')
            w++;
    }
    int count = 0;
    int diffx = ex - sx;
    int diffy = ey - sy;
    for (int i = 0; i < t; i++)
    {
        count++;
        if (diffx >= 0 && diffy >= 0)
        {
            n--;
            e--;
            if (n == 0 && e == 0)
                goto xy;
        }
        if (diffx >= 0 && diffy <= 0)
        {
            n--;
            w--;
            if (n == 0 && e == 0)
                goto xy;
        }
        if (diffx <= 0 && diffy <= 0)
        {
            s--;
            w--;
            if (s == 0 && w == 0)
                goto xy;
        }
        if (diffx <= 0 && diffy >= 0)
        {
            s--;
            e--;
            if (s == 0 && e == 0)
                goto xy;
        }
        if (i == t - 1)
        {
            cout << "-1";
            break;
        }
    }
xy:
    cout << count;
}
