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
    LL a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a + b);
    printf("%lld\n", a - b);
    printf("%lld\n", a * b);
    printf("%lld\n", a / b);
    printf("%lld\n", a % b);
    printf("%.2f\n", (float)a / b);
    return 0;
}