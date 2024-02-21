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
    int a[10000], cnt[10000] = {0};
    int d = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int b[10000];
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] > 1)
        {
            b[++d] = a[i];
            cnt[a[i]] = 0;
        }
    }
    printf("%d\n", d);
    for (int i = 1; i <= d; i++)
        printf("%d ", b[i]);
    return 0;
}