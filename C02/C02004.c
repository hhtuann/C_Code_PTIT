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
    for (int i = 2 * n - 1; i > 0; i--)
    {
        if (i > n)
            printf("~");
        else
            printf("*");
    }
    printf("\n");
    for (int i = n - 2; i > 0; i--)
    {
        for (int j = i + n; j > 0; j--)
        {
            if (j > n)
                printf("~");
            else
            {
                if (j == n || j == 1)
                    printf("*");
                else
                    printf(".");
            }
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {
        printf("*");
    }
    return 0;
}