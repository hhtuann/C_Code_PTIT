#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + m; j > 0; j--)
        {
            if (j > m)
                printf("~");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}