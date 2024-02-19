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
        {
            printf("%d^%d", i, cnt);
            if (n > 1)
                printf(" * ");
        }
    }
    if (n > 1)
        printf("%d^1", n);
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
        printf("%d = ", n);
        primeFactorization(n);
        printf("\n");
    }
    return 0;
}