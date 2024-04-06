#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int gcd(int a, int b)
{
    while (a * b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a + b;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (gcd(a, b) == gcd(c, d))
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
