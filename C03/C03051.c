#include <stdio.h>
#include <math.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        a = ceil(sqrt(a));
        b = sqrt(b);
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}