#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
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
        if (n == 1)
            printf("1");
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                while (n % i == 0)
                {
                    printf("%d ", i);
                    n /= i;
                }
            }
            if (n > 1)
                printf("%d", n);
            printf("\n");
        }
    }
    return 0;
}