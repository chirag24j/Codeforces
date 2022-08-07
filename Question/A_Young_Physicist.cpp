#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sumx = 0, sumy = 0, sumz = 0;
    for (int i = 0; i < n; i++)
    {
        sumx += arr[i][0];
        sumy += arr[i][1];
        sumz += arr[i][2];
    }
    if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}