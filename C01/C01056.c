#include <stdio.h>
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
    while (test--)
    {
        LL n;
        scanf("%lld", &n);
        int a = n % 10;
        n /= 10;
        while (n)
        {
            if (a < n % 10)
                break;
            a = n % 10;
            n /= 10;
        }
        if (n)
            printf("NO");
        else
            printf("YES");
        printf("\n");
    }
    return 0;
}