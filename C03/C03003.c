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
    int n;
    int cnt = 0;
    scanf("%d", &n);
    int i = 2;
    while (cnt < n)
    {
        if (isPrime(i++))
        {
            printf("%d\n", i - 1);
            cnt++;
        }
    }
    return 0;
}