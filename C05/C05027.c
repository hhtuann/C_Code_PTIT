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
    LL row = inf;
    LL col = inf;
    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        row = a < row ? a : row;
        col = b < col ? b : col;
    }
    printf("%lld", row * col);
    return 0;
}