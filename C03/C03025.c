#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int isPrime(int m)
{
    if (m == 2 || m == 3)
    {
        return 1;
    }
    if (m % 2 == 0 || m % 3 == 0 || m < 2)
    {
        return 0;
    }
    for (int i = 5; i * i <= m; i += 6)
    {
        if (m % i == 0 || m % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}
int checkDigits(int n)
{
    int sum = 0;
    while (n)
    {
        int k = n % 10;
        if (k != 2 && k != 3 && k != 5 && k != 7)
            return 0;
        sum += k;
        n /= 10;
    }
    if (isPrime(sum))
        return 1;
    return 0;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a > b)
        {
            a += b;
            b = a - b;
            a -= b;
        }
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i) && checkDigits(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}