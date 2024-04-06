#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
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
                printf("%d", i);
                n /= i;
                if (n != 1)
                    printf("x");
            }
        }
        if (n > 1)
            printf("%d", n);
    }
    return 0;
}