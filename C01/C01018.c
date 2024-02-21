#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
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
        int n;
        scanf("%d", &n);
        int sqrtN = sqrt(n);
        if (sqrtN * sqrtN == n)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}