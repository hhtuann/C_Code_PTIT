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
    int n;
    int a[10000], check[10000] = {0};
    int d = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if(check[a[i]] == 0) 
        {
            printf("%d ", a[i]);
            check[a[i]] = 1;
        }
    }
        return 0;
}