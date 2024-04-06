#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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