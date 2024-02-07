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
    for (int i = 0; i < n; ++i)
        printf("*");
    printf("\n");
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
    for (int i = 0; i < n; ++i)
        printf("*");
    return 0;
}