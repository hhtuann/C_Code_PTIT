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