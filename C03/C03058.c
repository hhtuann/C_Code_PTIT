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
LL LCM(LL a, LL b)
{
    LL x = a * b;
    while (a * b)
    {
        LL tmp = b;
        b = a % b;
        a = tmp;
    }
    return x / (a + b);
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        LL n;
        scanf("%lld", &n);
        LL res = 1;
        for (LL i = 2; i <= n; i++)
        {
            res = LCM(i, res);
        }
        printf("%lld\n", res);
    }
    return 0;
}