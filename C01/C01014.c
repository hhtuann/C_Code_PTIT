#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
int main()
{
    // input
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0)
    {
        if (b == 0)
            printf("Vo so nghiem");
        else
            printf("Vo nghiem");
    }
    else
    {
        printf("%.2f", (float)-b / a);
    }
    return 0;
}