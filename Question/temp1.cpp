#include <bits/stdc++.h>
using namespace std;
typedef multimap<int, int> MapType;
int SortedFrequency(int *array, int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(array[i]) != mp.end())
        {
            mp[array[i]]++;
        }
        else
        {
            mp[array[i]] = 1;
        }
    }
    multimap<int, int> mp2;
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        mp2.insert(MapType::value_type(it->second, it->first));
    }
    map<int, int>::reverse_iterator itr;
    for (itr = mp2.rbegin(); itr != mp2.rend(); itr++)
    {
        for (int i = 0; i < itr->first; i++)
            return itr->second;
    }
}
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cout << SortedFrequency(a, N);
}