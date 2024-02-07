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