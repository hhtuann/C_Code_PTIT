#include <stdio.h>
#include <stdlib.h>
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
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        printf("Test %d:\n", t);
        int m, n;
        int a[100][100];
        scanf("%d %d", &m, &n);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 2; i <= m; i++)
        {
            for (int j = 2; j <= n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
