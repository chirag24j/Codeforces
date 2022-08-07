#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    sort(arr, arr + n);
    int temp[n];
    int start = 0, end = n - 1;
    int flag = true;
    for (int i = 0; i < n; i++)
    {
        if (flag)
            temp[i] = arr[start++];
        else
            temp[i] = arr[end--];

        flag = !flag;
    }
    bool temp2 = true;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
            continue;
        else
        {
            temp2 = false;
            break;
        }
    }
    if ((arr[n - 1] > arr[n - 2] && arr[n - 1] > arr[0]) || (arr[n - 1] < arr[n - 2] && arr[n - 1] < arr[0]))
        goto xy;
    else
    {
        temp2 = false;
    }
xy:
    if (temp2)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        banao();
    }
}