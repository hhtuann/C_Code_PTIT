#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
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