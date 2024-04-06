#include <stdio.h>
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
    for (int i = 1; i <= m; i++)
    {
        printf("%d", i);
        for (int j = n - 1; j > 0; j--)
        {
            if (i + n - j <= n)
                printf("%d", i + n - j);
            else
                printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}