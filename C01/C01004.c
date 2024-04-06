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
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; ++i)
    {
        double n;
        scanf("%lf", &n);
        printf("%.15lf\n", 1 / n);
    }
    return 0;
}