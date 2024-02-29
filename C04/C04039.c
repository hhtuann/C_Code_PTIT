#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    int a, b;
    // ý tưởng
    // len =  1 + 2 + ... + (k-1) + (k-1) + ... + 2 + 1 + phần dư;
    while (scanf("%d %d", &a, &b) != -1)
    {
        int len = abs(b - a);
        int k = sqrt(len);
        int res = 2 * (k - 1);
        int du = len - k * (k - 1);
        if (du > 2 * k)
            res += 3;
        else if (du > k)
            res += 2;
        else
            res += 1;
        printf("%d\n", res);
    }
    return 0;
}