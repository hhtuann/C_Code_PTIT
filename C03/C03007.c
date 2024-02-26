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
int main()
{
    // input
    int test;
    scanf("%d", &test);
    int a, b;
    while (test--)
    {
        int cnt = 0;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            int n = i, new = 0;
            while (n != 0)
            {
                new = new * 10 + n % 10;
                n /= 10;
            }
            if (new == i && isPrime(new))
            {
                cnt++;
                if (cnt > 10)
                {
                    printf("\n");
                    cnt = 1;
                }
                printf("%d ", i);
            }
        }
        printf("\n\n");
    }

    return 0;
}