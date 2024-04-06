#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    for (int i = 1; i <= n; i++)
    {
        int d = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", d);
            d += n - j;
        }
        printf("\n");
    }
    return 0;
}