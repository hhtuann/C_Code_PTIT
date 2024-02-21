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
    int first_digit = (int)('A') - 1;
    for (int i = 1; i <= n; i++)
    {
        int d = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%c\t", first_digit + d);
            d += n - j;
        }
        printf("\n");
    }
    return 0;
}