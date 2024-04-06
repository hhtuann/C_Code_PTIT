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
        if (i % 2) // xuôi
        {
            for (int j = i * (i - 1) / 2 + 1; j <= i * (i + 1) / 2; j++)
            {
                printf("%d\t", j);
            }
        }
        else
        {
            for (int j = i * (i + 1) / 2; j > i * (i - 1) / 2; j--)
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
    return 0;
}