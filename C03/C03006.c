#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void primeFactorization(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt)
            printf("%d(%d) ", i, cnt);
    }
    if (n > 1)
        printf("%d(1)", n);
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int n;
        scanf("%d", &n);
        printf("Test %d: ", i);
        primeFactorization(n);
        printf("\n");
    }
    return 0;
}