#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

const int inf = (int)(1e9 + 7);

int main()
{
    // input
    int n;
    scanf("%d", &n);
    int u, d;
    int sumUp = 0;
    int sumDown = 0;
    int minUp = inf;
    int minDown = inf;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &u, &d);
        sumUp += u;
        sumDown += d;
        if (u < minUp)
            minUp = i;
        if (d < minDown)
            minDown = d;
    }
    if (sumUp > sumDown)
    {
        printf("%d", sumUp + minDown);
    }
    else
    {
        printf("%d", sumDown + minUp);
    }
    return 0;
}