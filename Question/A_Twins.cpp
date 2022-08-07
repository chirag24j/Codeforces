#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, count = 0, temp = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    temp = sum;
    sort(a, a + n);
    if (n == 2 && a[0] < a[1])
    {

        cout << "1";
        return 0;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        count++;
        temp = temp - a[i];
        if (temp < sum / 2)
            break;
    }
    cout << count;
}