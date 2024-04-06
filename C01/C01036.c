#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n;
    scanf("%d", &n);
    LL res = 1;
    while (n)
    {
        res *= n % 10;
        n /= 10;
    }
    printf("%lld", res);
    return 0;
}