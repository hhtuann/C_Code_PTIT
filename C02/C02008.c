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
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
        printf("*");
    return 0;
}