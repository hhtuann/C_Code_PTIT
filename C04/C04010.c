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
    int min1 = a[1];
    int min2 = inf;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] > min1 && a[i] < min2)
        {
            min2 = a[i];
        }
    }
    printf("%d %d", min1, min2);
    return 0;
}