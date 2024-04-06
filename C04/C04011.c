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
        int a[10000];
        scanf("%d", &n);
        int cnt = 0;
        int maxx = -inf;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > maxx)
            {
                cnt++;
                maxx = a[i];
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}