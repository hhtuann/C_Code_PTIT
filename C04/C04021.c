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
    int n, k;
    int a[10000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (int i = n - k + 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 1; i <= n - k; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}