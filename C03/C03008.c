#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int PerfectNum(int n)
{
    if (n == 1)
        return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i + n / i;
            if (i == n / i)
                sum -= i;
        }
    }
    if (sum == n)
        return 1;
    return 0;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (PerfectNum(i))
            printf("%d ", i);
    }
    return 0;
}