#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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