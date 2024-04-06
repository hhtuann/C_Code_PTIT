#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int cnt[100005];

int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        cnt[a]++;
        cnt[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == n - 1)
        {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}