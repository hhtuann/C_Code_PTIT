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