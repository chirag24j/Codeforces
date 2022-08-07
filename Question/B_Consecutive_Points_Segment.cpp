#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int temp1 = 1, temp2 = 1;
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == 3 && temp1)
        {
            arr[i]--;
            temp1 = 0;
        }
        else if (arr[i] - arr[i - 1] == 2 && temp1)
        {
            temp1 = 0;
        }
        else if (arr[i] - arr[i - 1] == 2)
        {
            arr[i]--;
        }
        else if (arr[i] - arr[i - 1] == 0)
        {
            arr[i]++;
        }
        else if (arr[i] - arr[i - 1] == 1)
            continue;
        else
        {
            temp2 = 0;
            break;
        }
    }
    if (temp2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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