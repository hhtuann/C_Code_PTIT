#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

LL minChange(LL n)
{
    LL tmp = n;
    LL d = 1;
    while (n)
    {
        int k = n % 10;
        if (k == 6)
            tmp -= d;
        n /= 10;
        d *= 10;
    }
    return tmp;
}
LL maxChange(LL n)
{
    LL tmp = n;
    LL d = 1;
    while (n)
    {
        int k = n % 10;
        if (k == 5)
            tmp += d;
        n /= 10;
        d *= 10;
    }
    return tmp;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        LL a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", minChange(a) + minChange(b), maxChange(a) + maxChange(b));
    }
    return 0;
}