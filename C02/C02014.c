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
int Max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = -n + 1; i <= n - 1; i++)
    {
        for (int j = -n + 1; j <= n - 1; j++)
        {
            int a = Max(abs(i), abs(j)) + 1;
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}