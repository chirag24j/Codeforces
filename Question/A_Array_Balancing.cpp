#include <bits/stdc++.h>
using namespace std;
void banao()
{
    long long int n;
    cin >> n;
    long long int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            long long int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(a[i] - a[i + 1]);
        sum += abs(b[i] - b[i + 1]);
    }
    cout << sum << endl;
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