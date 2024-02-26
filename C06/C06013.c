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
int check(char s[])
{
    int f[20] = {0};
    if (s[0] == '0')
        return -1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            f[s[i] - '0'] = 1;
        else
            return -1;
    }
    for (int i = 0; i < 10; i++)
    {
        if (f[i] == 0)
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[2000];
        gets(s);
        if (check(s) == -1)
            printf("INVALID\n");
        else if (check(s) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}