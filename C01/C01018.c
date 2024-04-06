#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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