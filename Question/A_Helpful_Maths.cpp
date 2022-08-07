#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, output;
    cin >> s;
    int countone = 0, counttwo = 0, countthree = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            countone++;
        else if (s[i] == '2')
            counttwo++;
        else if (s[i] == '3')
            countthree++;
    }
    for (int i = 0; i < s.length(); i += 2)
    {
        if (countone != 0)
        {
            if (counttwo == 0 && countthree == 0 && countone == 1)
            {
                output += '1';
                countone--;
            }
            else
            {
                output += '1';
                output += '+';
                countone--;
            }
        }
        else if (counttwo != 0)
        {
            if (countthree == 0 && counttwo == 1)
            {
                output += '2';
                counttwo--;
            }
            else
            {
                output += '2';
                output += '+';
                counttwo--;
            }
        }
        else if (countthree != 0)
        {
            if (countthree == 1)
            {
                output += '3';
                countthree--;
            }
            else
            {
                output += '3';
                countthree--;
                output += '+';
            }
        }
    }
    cout << output;
}