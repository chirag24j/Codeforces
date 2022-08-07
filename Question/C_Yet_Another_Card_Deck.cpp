#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int t[q];
    for (int i = 0; i < q; i++)
        cin >> t[i];
    vector<int> v(q);
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (t[i] == a[j])
            {
                v.push_back(j + 1);
                int temp = a[0];
                a[0] = a[j];
                a[j] = temp;
            }
        }
    }
}