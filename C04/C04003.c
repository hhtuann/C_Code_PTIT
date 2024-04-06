#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int doiXung(int n, int a[])
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (a[i] != a[n - i + 1])
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[100000];
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (doiXung(n, a))
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}