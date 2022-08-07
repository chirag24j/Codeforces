#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[n];
    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.insert(pair<int, int>(a[i], i));
    }
}