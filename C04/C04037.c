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
    int a[10000], cnt[10000] = {0};
    int d = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int b[10000];
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] > 1)
        {
            b[++d] = a[i];
            cnt[a[i]] = 0;
        }
    }
    printf("%d\n", d);
    for (int i = 1; i <= d; i++)
        printf("%d ", b[i]);
    return 0;
}