#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string gust = guest + host;
    sort(gust.begin(), gust.end());
    sort(pile.begin(), pile.end());
    if (pile == gust)
        cout << "YES";
    else
        cout << "NO";
}