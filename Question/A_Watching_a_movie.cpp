#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }
    int start = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        while (start + x <= l[i])
        {
            start += x;
        }
        count += (r[i] - start) + 1;
        start = r[i] + 1;
    }
    cout << count;
}