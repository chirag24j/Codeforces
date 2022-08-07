#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    bool temp = false;
    for (int i = 0; i < n; i++)
    {
        if (sum - arr[i] == (n - 1) * arr[i])
            temp = true;
    }
    if (temp)
        cout << "YES\n";
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