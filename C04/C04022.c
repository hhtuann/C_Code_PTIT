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
    int n, a[10000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max1 = a[1];
    int max2 = -inf;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] < max1 && a[i] > max2)
        {
            max2 = a[i];
        }
    }
    printf("%d %d", max1, max2);
    return 0;
}