#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int m, n;
    scanf("%d %d", &m, &n);
    int tmp = sqrt(m);
    if (tmp * tmp != m)
        m = tmp + 1;
    else
        m = tmp;
    n = sqrt(n);
    int cnt = n - m + 1;
    printf("%d\n", cnt);
    for (int i = m; i <= n; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}