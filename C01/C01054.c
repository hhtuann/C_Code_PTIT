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
int main()
{
    // input
    int test;
    scanf("%d", &test);
    LL sum = 0;
    while (test--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                sum += i;
                n /= i;
            }
        }
        if (n > 1)
            sum += n;
    }
    printf("%lld", sum);
    return 0;
}