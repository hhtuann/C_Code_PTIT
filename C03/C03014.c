#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
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
    int test;
    scanf("%d", &test);
    while (test--)
    {
        LL a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", a * b / gcd(a, b), gcd(a, b));
    }
    return 0;
}