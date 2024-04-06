#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int sumDigit(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int sumPrime(int n)
{
    int sum = 0;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            sum += sumDigit(i);
            n /= i;
        }
    }
    if (n > 1)
        sum += sumDigit(n);
    return sum;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    if (sumDigit(n) == sumPrime(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}