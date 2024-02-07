#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    for (int i = 1; i <= n; i++)
    {
        if (i % 2) // xuôi
        {
            for (int j = i * (i - 1) / 2 + 1; j <= i * (i + 1) / 2; j++)
            {
                printf("%d\t", j);
            }
        }
        else
        {
            for (int j = i * (i + 1) / 2; j > i * (i - 1) / 2; j--)
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
    return 0;
}