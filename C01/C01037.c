#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int a, b;
    LL sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}