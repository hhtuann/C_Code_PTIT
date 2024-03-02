#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
int main()
{
    // input
    char s[1005];
    scanf("%s", &s);
    int f[1005] = {0};
    f[0] = 1;
    int res = 1;
    for (int i = 1; i < strlen(s); i++)
    {
        f[i] = 1;
        int max = 0;
        for (int j = 0; j < i; j++)
            if (s[i] > s[j] && f[j] > max)
                max = f[j];
        f[i] += max;
        res = f[i] > res ? f[i] : res;
    }
    printf("%d", 26 - res);
    return 0;
}