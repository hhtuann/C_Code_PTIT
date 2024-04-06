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
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i)
        printf("*");
    printf("\n");
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0 || j == m - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < m; ++i)
        printf("*");
    return 0;
}