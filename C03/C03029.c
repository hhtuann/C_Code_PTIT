#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int checkDigits(LL n)
{
    if (n % 2)
        return 0;
    while (n)
    {
        if ((n % 10) % 2)
            return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while(test--)
    {
        LL n;
        scanf("%lld", &n);
        if(checkDigits(n)) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}