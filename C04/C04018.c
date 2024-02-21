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
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] == a[i - 1])
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
