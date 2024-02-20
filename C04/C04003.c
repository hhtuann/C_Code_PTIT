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