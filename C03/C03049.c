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
int check(long long n)
{
    int even = 0;
    int odd = 0;
    if (n % 2 == 0)
        return 0;
    while (n)
    {
        int k = n % 10;
        if (k % 2)
            odd++;
        else
            even++;
        n /= 10;
    }
    if (even < odd)
        return 1;
    return 0;
}

int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long n;
        scanf("%lld", &n);
        if (check(n))
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
