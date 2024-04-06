#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

LL gcd(LL a, int b)
{
    while (a * b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a + b;
}
LL lcm(LL a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        LL LCM = n;
        for (int i = n + 1; i <= m; i++)
        {
            LCM = lcm(LCM, i);
        }
        printf("%lld\n", LCM);
    }
    return 0;
}