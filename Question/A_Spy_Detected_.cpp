#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int unique = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] -= unique;
    }
    int count = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            count++;
            index = i + 1;
        }
    }
    if (count == 1)
    {
        cout << index << endl;
    }
    else
        cout << "1" << endl;
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