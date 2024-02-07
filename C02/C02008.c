#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
        printf("*");
    return 0;
}