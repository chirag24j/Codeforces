#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (!isalpha(s[0]))
        {
            if (stoi(s) < 18)
            {
                count++;
            }
        }
        else if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE")
            count++;
    }
    cout << count;
}