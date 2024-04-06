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
        int n;
        scanf("%d", &n);
        if (n % 2)
            printf("0");
        else
        {
            int d1 = 0;
            while (n % 2 == 0)
            {
                d1++;
                n /= 2;
            }
            int d2 = 1;
            for (int i = 3; i * i <= n; i++)
            {
                int k = 1;
                while (n % i == 0)
                {
                    k++;
                    n /= i;
                }
                d2 *= k;
            }
            if (n > 1)
                d2 *= 2;
            printf("%d", d1 * d2);
        }
        printf("\n");
    }
    return 0;
}