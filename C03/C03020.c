#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int check(int n)
{
    int nRev = 0;
    int N = n;
    int sumDigits = 0;
    int kt = 0;
    while (n)
    {
        nRev = nRev * 10 + n % 10;
        sumDigits += n % 10;
        if (n % 10 == 6)
            kt = 1;
        n /= 10;
    }
    if (N == nRev && sumDigits % 10 == 8 && kt == 1)
        return 1;
    return 0;
}
int main()
{
    // input
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
        if (check(i))
            printf("%d ", i);
    }

    return 0;
}