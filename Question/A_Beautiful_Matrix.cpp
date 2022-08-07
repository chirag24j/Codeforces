#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5], posi, posj;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                posi = i;
                posj = j;
            }
        }
    }
    int newi, newj;
    newi = abs(2 - posi);
    newj = abs(2 - posj);
    int sum = newi + newj;
    cout << sum;
}