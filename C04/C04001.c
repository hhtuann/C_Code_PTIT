#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[100000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0)
                printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}