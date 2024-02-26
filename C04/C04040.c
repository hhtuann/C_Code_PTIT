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