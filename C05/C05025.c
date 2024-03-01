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
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int a[1005][1005];
int main()
{
    // input
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        int m, n;
        scanf("%d %d", &n, &m);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i1 = 1; i1 <= n; i1++)
        {
            for (int j1 = 1; j1 <= m; j1++)
            {
                for (int i2 = i1; i2 <= n; i2++)
                {
                    for (int j2 = j1; j2 <= m; j2++)
                    {
                        if (a[i1][j1] > a[i2][j2])
                            swap(&a[i1][j1], &a[i2][j2]);
                    }
                }
            }
        }
        printf("Test %d:\n", t);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}