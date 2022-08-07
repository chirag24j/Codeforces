#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int y[n];
    int count = 0, team = 0;
    for (int i = 0; i < n; i++)
        cin >> y[i];
    for (int i = 0; i < n; i++)
    {
        if (y[i] <= 5 - k)
        {
            count++;
            if (count == 3)
            {
                team += 1;
                count = 0;
            }
        }
    }
    cout << team;
}