#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int a[1005][1005];

int main()
{
    // input
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        int col[1005] = {0};
        int row[1005] = {0};
        int m, n; // m hàng n cột
        scanf("%d %d", &m, &n);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
                row[i] += a[i][j];
            }
        }
        int max = 0;
        int r = 0;
        for (int i = 1; i <= m; i++)
        {
            if (row[i] > max)
            {
                max = row[i];
                r = i;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            if(i == r)
                continue;
            for (int j = 1; j <= n; j++)
            {
                col[j] += a[i][j];
            }
        }
        max = 0;
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (col[i] > max)
            {
                max = col[i];
                c = i;
            }
        }
        printf("Test %d:\n", t);
        for (int i = 1; i <= m; i++)
        {
            if (i == r)
                continue;
            for (int j = 1; j <= n; j++)
            {
                if (j == c)
                    continue;
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}