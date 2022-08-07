#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n);
    long long int max = b[n - 1];
    long long int min = b[0];
    long long int maxcount = 0, mincount = 0;
    long long int count = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (b[i] == max)
            maxcount++;
        if (b[i] == min)
            mincount++;
    }
    for (long long int i = 0; i < n - 1; i++)
    {
        if (b[i] == b[i + 1])
            count++;
    }
    if (count == n - 1)
    {
        long long int temp = 0;
        temp = (n * (n - 1)) / 2;
        cout << max - min << " " << temp;
    }
    else
    {
        cout << max - min << " " << maxcount * mincount << endl;
    }
}