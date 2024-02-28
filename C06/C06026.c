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
    int len = strlen(s) - 1;
    for (int i = 0; i <= len; i++)
    {
        tmp[len - i] = s[i];
    }
    if (strcmp(tmp, s) == 0)
        return 1;
    return 0;
}
int main()
{
    // input
    char s[50], a[10000][50];
    int max = 0;
    int n = 0;
    while (scanf("%s", s) != -1)
    {
        if (check(s))
        {
            int m = strlen(s);
            strcpy(a[++n], s);
            if (max < m)
                max = m;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (strlen(a[i]) == max)
        {
            int cnt = 1;
            for (int j = i + 1; j <= n; j++)
            {
                if (strcmp(a[i], a[j]) == 0)
                {
                    a[j][0] = 0;
                    cnt++;
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
    return 0;
}