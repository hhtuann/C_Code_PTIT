#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        LL n;
        scanf("%lld", &n);
        LL res = -1;
        for (LL i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                res = i;
                n /= i;
            }
        }
        if (n > 1)
            res = n;
        printf("%lld\n", res);
    }
    return 0;
}