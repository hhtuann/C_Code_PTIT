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
int div5(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 5)
        return 0;
    return 1;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i) && div5(i))
        {
            printf("%d ", i);
            cnt++;
        }
        }
    printf("\n%d", cnt);
    return 0;
}