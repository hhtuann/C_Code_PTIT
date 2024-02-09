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
LL f[1005];
void Fibo()
{
    f[0] = f[1] = f[2] = f[3] = f[5] = f[8] = f[13] = f[21] = 1;
}
int sumDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int checkPrime(int n)
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
    Fibo();
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    for (int i = a; i <= b; i++)
    {
        if (checkPrime(i) && f[sumDigits(i)])
            printf("%d ", i);
    }
    return 0;
}