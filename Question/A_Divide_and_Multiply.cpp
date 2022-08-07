#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int temp = 1;
        for (int i = 0; i < n; i++)
        {
            while (a[i] % 2 == 0)
            {
                a[i] /= 2;
                temp *= 2;
            }
        }
        sort(a, a + n);
        a[n - 1] *= temp;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << endl;
    }
}