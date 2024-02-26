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
int main()
{
    // input
    int n;
    scanf("%d", &n);
    LL bin = 0;
    LL x = 1;
    while (n)
    {
        int k = n % 2;
        bin = k * x + bin;
        x *= 10;
        n /= 2;
    }
    printf("%lld", bin);
    return 0;
}