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
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
        printf("*");
    printf("\n");
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = i + m; j > 0; j--)
        {
            if (j > m)
                printf("~");
            else
            {
                if (j == 1 || j == m)
                    printf("*");
                else
                    printf(".");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= m + n - 1; i++)
    {
        if (i >= n)
            printf("*");
        else
            printf("~");
    }
    return 0;
}