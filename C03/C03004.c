#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

LL gcd(LL a, LL b)
{
    while (a * b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a + b;
}
int main()
{
    // input
    LL a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld", gcd(a, b), a * b / gcd(a, b));
    return 0;
}