#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
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