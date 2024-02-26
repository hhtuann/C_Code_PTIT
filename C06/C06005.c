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
    char a[100][100];
    int n = 1;
    while (scanf("%s", a[n]) != -1)
    {
        for (int i = 0; i < strlen(a[n]); i++)
            if (a[n][i] >= 'A' && a[n][i] <= 'Z')
                a[n][i] += 32;
        n++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i][0])
        {
            int cnt = 1;
            for (int j = i + 1; j <= n; j++)
            {
                if (strcmp(a[i], a[j]) == 0)
                {
                    cnt++;
                    a[j][0] = 0;
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
    return 0;
}