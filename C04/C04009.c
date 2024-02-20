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
    int n;
    scanf("%d", &n);
    int a[10000];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2)
            printf("%d ", a[i]);
    }
    return 0;
}