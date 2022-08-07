#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start = -1, end = n;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            start = i - 1;
            break;
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] == arr[i - 1])
        {
            end = i;
            break;
        }
    }
    if (end != start + 1 && start != -1)
    {
        cout << max(1, end - start - 2) << endl;
    }
    else
        cout << "0" << endl;
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