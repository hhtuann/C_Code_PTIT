#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (c - a == d - b)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
