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
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + n; j > 0; j--)
        {
            if (j > n)
                printf("~");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}