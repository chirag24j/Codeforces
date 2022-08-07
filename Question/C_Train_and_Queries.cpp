#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int a[k], b[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    int t1 = 0, t2 = 0, p1, p2;
    while (k--)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[t1] == arr[i])
            {
                p1 = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[t2] == arr[i])
            {
                p2 = i;
                break;
            }
        }
        if (p1 == 0 || p2 == 0)
            cout << "NO\n";
        else if (p1 > p2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        t1++;
        t2++;
        p1 = 0, p2 = 0;
    }
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
