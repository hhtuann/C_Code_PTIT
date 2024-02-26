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
    int test;
    scanf("%d", &test);
    while (test--)
    {
        LL n;
        scanf("%lld", &n);
        LL res;
        for (LL i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                res = i;
            while (n % i == 0)
                n /= i;
        }
        if(n>1)
            res = n;
        printf("%lld\n", res);
    }
    return 0;
}