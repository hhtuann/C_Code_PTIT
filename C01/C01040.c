#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("0");
        return 0;
    }
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
        printf("1");
    else
        printf("0");
    return 0;
}