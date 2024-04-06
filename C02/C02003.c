#include <stdio.h>
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
    for (int i = 0; i < n; ++i)
        printf("*");
    printf("\n");
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
    for (int i = 0; i < n; ++i)
        printf("*");
    return 0;
}