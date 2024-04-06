#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int Min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    // input
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        printf("%d", i + 1);
        int j;
        for (j = i + 2; j <= n; j++)
            printf("%d", j);
        for (int x = 1; x <= Min(i, n - 1); x++)
            printf("%d", j - x - 1);
        printf("\n");
    }
    return 0;
}