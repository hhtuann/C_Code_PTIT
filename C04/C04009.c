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
    int n;
    scanf("%d", &n);
    int a[10000];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2)
            printf("%d ", a[i]);
    }
    return 0;
}