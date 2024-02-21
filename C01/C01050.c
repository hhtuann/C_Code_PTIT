#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
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