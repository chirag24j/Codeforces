/* Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;
int main(int argc, char *a[])
{
    int lh, lm;
    cin >> lh >> lm;
    int th, tm;
    cin >> th >> tm;
    int hh = 0, hm = 0;
    if (lh + th <= 23)
        hh = lh + th;
    else
        hh = (lh + th) % 23;
    if (lm + tm <= 59)
        hm = lm + tm;
    else
    {
        hm = (lm + tm) % 59 - 1;
        hh++;
    }
    cout << hh << " " << hm << endl;
}
