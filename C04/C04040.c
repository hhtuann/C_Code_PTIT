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
        int x;
        LL sum = 0;
        LL res = -inf;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &x);
            sum += x;
            res = sum > res ? sum : res;
            if (sum < 0)
                sum = 0;
        }
        printf("%lld\n", res);
    }
    return 0;
}