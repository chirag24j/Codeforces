#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int index = 0;
    int left = 0, right = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '|')
        {
            index = i;
            break;
        }
        else
            left++;
    }
    for (int i = index + 1; i < s1.length(); i++)
    {
        right++;
    }
    string s3;
    if (left + right == s2.length() && s1[0] != '|')
    {
        int temp1 = s2.length() - left;
        int temp2 = s2.length() - right;
        if (left < right)
        {
            for (int i = 0; i < s1.length(); i++)
            {
                if (s1[i] != '|')
                {
                    s3 += s1[i];
                    index = i;
                }
                else
                    break;
            }
            for (int i = 0; i < temp1; i++)
            {
                s3 += s2[i];
            }
            for (int i = index; i < s1.length(); i++)
            {
                s3 += s1[i];
            }
            cout << s3;
            return 0;
        }
        else
        {
            for (int i = 0; i < s1.length(); i++)
            {
                if (s1[i] == '|')
                    index = i;
            }
            for (int i = index + 1; i < s1.length(); i++)
            {
                s3 += s1[i];
            }
            for (int i = 0; i < temp2; i++)
            {
                s3 += s2[i];
            }
            for (int i = index; i < s1.length(); i++)
            {
                s3 += s1[i];
            }
            cout << s3;
            return 0;
        }
    }
    else if (left == right + s2.length() || left + s2.length() == right)
    {
        if (index == 0)
        {
            s3 += s2;
            s3 += s1;
            cout << s3;
            return 0;
        }
        else
        {
            s3 += s1;
            s3 += s2;
            cout << s3;
            return 0;
        }
    }
    else
        cout << "Impossible";
}