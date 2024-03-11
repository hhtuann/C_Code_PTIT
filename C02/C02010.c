#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */

int main()
{
    // input
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        printf("%d", i);
        for (int j = n - 1; j > 0; j--)
        {
            if(i + n - j <= n) 
                printf("%d", i + n - j);
            else 
                printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}