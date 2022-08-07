#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, x;
    cin >> n >> x;
    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n * 2);
    bool ok = true;
    for (int i = 0; i < n; ++i)
        if (arr[n + i] - arr[i] < x)
            ok = false;
    cout << (ok ? "YES" : "NO") << "\n";
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
