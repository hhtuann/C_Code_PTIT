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
    int n, a[10000];
    int min1 = inf, min2 = inf;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < min1)
            min1 = a[i];
    }
    for(int i = 1; i<=n; i++)
    {
        if(a[i] < min2 && a[i] > min1)
            min2 = a[i];
    }
    printf("%d %d", min1, min2);
    return 0;
}