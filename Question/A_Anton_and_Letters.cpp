#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    gets(s);
    int arr[128] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i]] = 1;
    }
    int count = 0;
    for (int i = 97; i <= 122; i++)
    {
        count += arr[i];
    }
    cout << count;
}