#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, countone = 0, counttwo = 0, sum1 = 0, sum2 = 0;
    ;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == 0)
            countone++;

        else
            counttwo++;
    }
    if (counttwo > countone)
        sum1 = countone;
    else
        sum1 = counttwo;
    countone = 0;
    counttwo = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][1] == 0)
            countone++;

        else
            counttwo++;
    }
    if (counttwo > countone)
        sum2 = countone;
    else
        sum2 = counttwo;
    cout << sum1 + sum2;
}
