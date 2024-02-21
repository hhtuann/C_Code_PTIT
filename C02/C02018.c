#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
            printf("~");
        for (int j = -i + 1; j <= i - 1; j++)
        {
            printf("%d", 2 * i - 1 - 2 * abs(j));
        }
        printf("\n");
    }
    return 0;
}