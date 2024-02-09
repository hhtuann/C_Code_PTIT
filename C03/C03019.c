#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
int check(int n)
{
    int nRev = 0;
    int N = n;
    int sumDigits = 0;
    while (n != 0)
    {
        nRev = nRev * 10 + n % 10;
        sumDigits += n % 10;
        n /= 10;
    }
    if (N == nRev && sumDigits % 10 == 0)
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
        int n;
        int cnt = 0;
        scanf("%d", &n);
        int p1 = pow(10, n - 1), p2 = pow(10, n);
        for (int i = p1; i < p2; i++)
            if (check(i))
                cnt++;
        printf("%d\n", cnt);
    }
    return 0;
}