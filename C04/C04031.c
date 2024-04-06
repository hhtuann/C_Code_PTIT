#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

const int inf = (int)(1e9 + 7);

void solve(int *a, int n)
{
    int cnt[1000] = {0};
    cnt[1] = 1;
    int len = -inf;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > a[i - 1])
            cnt[i] = cnt[i - 1] + 1;
        else
            cnt[i] = 1;
        len = cnt[i] > len ? cnt[i] : len;
    }
    printf("%d\n", len);
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == len)
        {
            for (int j = len - 1; j >= 0; j--)
            {
                printf("%d ", a[i - j]);
            }
            printf("\n");
        }
    }
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        printf("Test %d:\n", t);
        int a[1000];
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        solve(a, n);
    }
    return 0;
}