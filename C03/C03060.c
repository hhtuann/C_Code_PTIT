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
    int n, k;
    scanf("%d %d", &n, &k);
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        int d = i;
        while (d % 2 == 0)
        {
            cnt++;
            d /= 2;
        }
    }
    if (cnt >= k)
        printf("Yes");
    else
        printf("No");
    return 0;
}