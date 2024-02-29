#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
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