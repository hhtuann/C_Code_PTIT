#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        int m, n;
        scanf("%d %d", &n, &m);
        int a[n + 5][m + 5];
        int res[n + 5][n + 5];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                res[i][j] = 0;
                for (int x = 1; x <= m; x++)
                {
                    res[i][j] += a[i][x] * a[j][x];
                }
            }
        }
        printf("Test %d:\n", t);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}