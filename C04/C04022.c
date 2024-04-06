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