#include <bits/stdc++.h>
using namespace std;
int main()
{
    char chess[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> chess[i][j];
        }
    }
    int dista = 0, distb = 0, mina = INT_MAX, minb = INT_MAX;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chess[i][j] == 'W' && chess[i - 1][j] == '.')
            {
                dista = i + 1;
                if (dista > mina)
                    mina = dista;
            }
            if (chess[i][j] == 'B' && chess[i + 1][j] == '.')
            {
                dista = (8 - i) + 1;
                if (distb > minb)
                    minb = distb;
            }
        }
    }
    if (mina > minb)
        cout << "A";
    else
        cout << "B";
}