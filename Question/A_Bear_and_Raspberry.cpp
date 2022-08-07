#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = x[i] - x[i + 1] - c;
        if (max < temp)
            max = temp;
    }
    cout << max;
}