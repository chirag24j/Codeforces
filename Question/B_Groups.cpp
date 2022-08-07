#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][5];
        int temp[5] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> arr[i][j];
                if (j == 0 && arr[i][j] == 1)
                    temp[0]++;
                if (j == 1 && arr[i][j] == 1)
                    temp[1]++;
                if (j == 2 && arr[i][j] == 1)
                    temp[2]++;
                if (j == 3 && arr[i][j] == 1)
                    temp[3]++;
                if (j == 4 && arr[i][j] == 1)
                    temp[4]++;
            }
        }
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            if (temp[i] >= n / 2)
                count++;
        }
        if (count >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}