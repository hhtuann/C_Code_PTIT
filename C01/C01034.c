#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
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