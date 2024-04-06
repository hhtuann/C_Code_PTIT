#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

const int inf = (int)(1e9 + 7);

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