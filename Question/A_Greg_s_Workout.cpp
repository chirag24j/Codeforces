#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp = 0, biceps = 0, chest = 0, back = 0;
    for (int i = 0; i < n; i += 3)
    {
        chest += a[i];
    }
    for (int i = 1; i < n; i += 3)
    {
        biceps += a[i];
    }
    for (int i = 2; i < n; i += 3)
    {
        back += a[i];
    }
    if (chest > biceps && chest > back)
        cout << "chest";
    else if (biceps > chest && biceps > back)
        cout << "biceps";
    else
        cout << "back";
}