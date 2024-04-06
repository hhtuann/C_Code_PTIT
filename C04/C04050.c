#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int fa[1005];
int fb[1005];

int main()
{
    // input
    int m, n;
    scanf("%d %d", &n, &m);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        fa[x] = 1;
    }
    while (m--)
    {
        int x;
        scanf("%d", &x);
        fb[x] = 1;
    }
    for (int i = 1; i < 1000; i++)
    {
        if (fa[i] & fb[i])
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = 1; i < 1000; i++)
    {
        if (fa[i] && !fb[i])
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = 1; i < 1000; i++)
    {
        if (!fa[i] && fb[i])
        {
            printf("%d ", i);
        }
    }
    return 0;
}