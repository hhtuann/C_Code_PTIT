#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
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
    for (int i = 1; i <= m; i++)
    {
        printf("%d", i);
        for (int j = i + 1; j <= n; j++)
            printf("%d", j);
        for (int j = Min(i - 1, n - 1); j > 0; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}