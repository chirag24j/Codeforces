#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp;
    cin >> n >> m;
    for (int i = n + 1; i > 0; i++)
    {
        int flag = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                flag++;
        }
        if (flag == 2)
        {
            temp = i;
            break;
        }
    }
    if (m == temp)
        cout << "YES";
    else
        cout << "NO";
}