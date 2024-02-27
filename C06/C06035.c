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
int check(char *s)
{
    char tmp[1000];
    strcpy(tmp, s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        tmp[len - i - 1] = s[i];
    }
    // printf("%s\n%s\n", s, tmp);
    int cnt = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != tmp[i])
            cnt++;
        if (cnt > 1)
            return 0;
    }
    if (cnt == 1)
        return 1;
    if (cnt == 0 && len % 2)
        return 1;
    return 0;
}
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[1000];
        gets(s);
        if (check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}