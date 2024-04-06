#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int Max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = i; j >= Max(i - n + 1, 1); j--)
            printf("%d", j);
        for (int j = 2; j <= n - i + 1; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}