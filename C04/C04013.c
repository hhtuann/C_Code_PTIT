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
int a[100000];
int cnt[1000000];
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] == 1)
            res++;
    }
    printf("%d\n", res);
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] == 1)
            printf("%d ", a[i]);
    }
    return 0;
}