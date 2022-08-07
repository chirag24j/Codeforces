#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool temp = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            continue;
        else
        {
            temp = true;
            break;
        }
    }
    if (n == 1)
        cout << 0 << endl;
    else if (temp)
    {
        int min = *min_element(arr, arr + n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (min != arr[i])
                ans += arr[i] - min;
        }
        cout << ans << endl;
    }
    else
        cout << 0 << endl;
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