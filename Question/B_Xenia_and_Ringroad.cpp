#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, count = 0, temp = 1;
    cin >> n >> m;
    long long int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {

        if (arr[i] >= temp)
        {
            count += arr[i] - temp;
        }
        else
        {
            count += n - (temp - arr[i]);
        }
        temp = arr[i];
    }
    cout << count;
}
