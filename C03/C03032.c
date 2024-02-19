#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
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
int checkDigits(int n)
{
    while (n)
    {
        int k = n % 10;
        if (k != 2 && k != 3 && k != 5 && k != 7)
            return 0;
        n /= 10;
    }
    return 1;
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