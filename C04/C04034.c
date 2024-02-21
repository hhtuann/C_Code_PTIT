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
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        int a[10000];
        int check[10000] = {0};
        int maxx = -inf;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for (int i = n; i > 0; i--)
        {
            if(a[i]>maxx)
            {
                check[i] = 1;
                maxx = a[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if(check[i])
                printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}