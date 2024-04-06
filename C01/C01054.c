#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int test;
    scanf("%d", &test);
    LL sum = 0;
    while (test--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                sum += i;
                n /= i;
            }
        }
        if (n > 1)
            sum += n;
    }
    printf("%lld", sum);
    return 0;
}