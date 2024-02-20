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
        int MAX = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > MAX)
                MAX = a[i];
        }
        printf("%d\n", MAX);
        for (int i=0; i<n; i++)
        {
            if(a[i] == MAX) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}