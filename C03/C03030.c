#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int nonDecrease(int n)
{
    int k = n % 10;
    n /= 10;
    while (n)
    {
        if (k < n % 10)
            return 0;
        k = n % 10;
        n /= 10;
    }
    return 1;
}
int Pow(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
        k *= 10;
    return k;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int p1 = Pow(n - 1);
        int p2 = Pow(n);
        for (int i = p1; i < p2; i++)
        {
            if (nonDecrease(i))
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}