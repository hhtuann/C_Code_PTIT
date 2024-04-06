#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int a[10000];

int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int MAX = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > MAX)
                MAX = a[i];
        }
        printf("%d\n", MAX);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == MAX)
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}