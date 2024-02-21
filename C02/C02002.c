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
    int n;
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + n; j > 0; j--)
        {
            if (j > n)
                printf("~");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}