#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 2; i <= n / 2; i++)
        {
            if (isPrime(i) && isPrime(n - i))
                printf("%d %d ", i, n - i);
        }
        printf("\n");
    }
    return 0;
}