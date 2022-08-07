#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a = 0, b = 0, c = 0, d = 0;
        for (int j = 0; j < n; j++)
        {
            if (x[i] > x[j] && y[i] == y[j])
                a++;
            if (x[i] < x[j] && y[i] == y[j])
                b++;
            if (x[i] == x[j] && y[i] > y[j])
                c++;
            if (x[i] == x[j] && y[i] < y[j])
                d++;
        }
        if (a >= 1 && b >= 1 && c >= 1 && d >= 1)
            count++;
    }
    cout << count;
}