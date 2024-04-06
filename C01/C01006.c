#include <stdio.h>
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
    if (b == 0)
    {
        printf("0");
        return 0;
    }
    printf("%lld\t", a + b);
    printf("%lld\t", a - b);
    printf("%lld\t", a * b);
    printf("%.2f\t", (float)a / b);
    printf("%lld", a % b);
    return 0;
}