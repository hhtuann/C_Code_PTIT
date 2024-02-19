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
int SumDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    // input
    int a, b;
    scanf("%d %d", &a, &b);
    if (SumDigits(a) > SumDigits(b))
        printf("%d %d", b, a);
    else
        printf("%d %d", a, b);
    return 0;
}