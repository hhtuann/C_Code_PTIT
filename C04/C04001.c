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
        int n, a[100000];
        scanf("%d", &n);
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i] % 2 == 0) printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}