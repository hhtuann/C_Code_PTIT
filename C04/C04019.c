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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[10000];
        int cnt[30006] = {0};
        int maxx = -inf;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            cnt[a[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[a[i]] > maxx)
                maxx = cnt[a[i]];
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[a[i]] == maxx)
            {
                printf("%d ", a[i]);
                cnt[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}