#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

LL f[1005];

void fibonacci()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        // printf("%lld\n", f[i]);
    }
}
int main()
{
    // input
    fibonacci();
    int test;
    scanf("%d", &test);
    while (test--)
    {
        LL n;
        scanf("%lld", &n);
        int i = 0;
        int check = 0;
        while (n >= f[i])
        {
            if (n == f[i])
            {
                printf("YES");
                check = 1;
                break;
            }
            i++;
        }
        if (!check)
            printf("NO");
        printf("\n");
    }

    return 0;
}