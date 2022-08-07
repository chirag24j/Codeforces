#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    char temp1 = arr[0][0];
    char temp2 = arr[0][1];
    int count = 0;
    if (temp1 == temp2)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j || i + j == n - 1) && temp1 == arr[i][j])
            {
                count++;
                continue;
            }
            if ((i != j || i + j != n - 1) && temp2 != arr[i][j])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    int temp3 = (pow(n, 2) - pow(n - 1, 2));
    if (count != temp3)
        cout << "NO";
    else
        cout << "YES";
}
