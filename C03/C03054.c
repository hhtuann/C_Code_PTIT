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
long long solve(long long n)
{
    long long res = 0;
    long long d = 1;
    while (n)
    {
        int k = n % 10;
        if (k == 0 || k == 8 || k == 9)
        {
            d *= 10;
        }
        else if (k == 1)
        {
            res = d + res;
            d *= 10;
        }
        else
            return -1;
        n /= 10;
    }
    return res;
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (solve(n) == -1 || solve(n) == 0)
            printf("INVALID");
        else
            printf("%lld", solve(n));
        printf("\n");
    }
    return 0;
}