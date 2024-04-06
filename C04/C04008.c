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
        int a[10000], b[10000];
        scanf("%d %d", &m, &n);
        int k;
        scanf("%d", &k);
        for (int i = 1; i <= m; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i <= n; i++)
            scanf("%d", &b[i]);
        printf("Test %d:\n", t);
        for (int i = 1; i <= k; i++)
            printf("%d ", a[i]);
        for (int i = 1; i <= n; i++)
            printf("%d ", b[i]);
        for (int i = k + 1; i <= m; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}