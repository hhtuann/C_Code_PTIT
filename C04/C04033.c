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
    int a[10000], check[10000] = {0};
    int d = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (check[a[i]] == 0)
        {
            printf("%d ", a[i]);
            check[a[i]] = 1;
        }
    }
    return 0;
}