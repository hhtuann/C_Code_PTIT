#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
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