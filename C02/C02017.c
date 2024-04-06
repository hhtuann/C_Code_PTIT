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
        for (int j = -i + 1; j <= i - 1; j++)
        {
            printf("%d", 2 * i - 1 - 2 * abs(j));
        }
        printf("\n");
    }
    return 0;
}