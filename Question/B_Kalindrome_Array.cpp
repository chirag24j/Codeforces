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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int temp = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n + 1 - i])
            {
                temp = arr[i];
                break;
            }
        }
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == temp)
                continue;
            else
            {
                arr2[i] = arr[i];
            }
        }
        int flag = 1;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n + 1 - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}