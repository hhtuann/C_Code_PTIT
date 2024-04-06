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
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int res = 1;
        for (int i = 2; i * i <= n; i++)
        {
            int check = 1;
            while (n % i == 0)
            {
                if (check)
                {
                    res *= i;
                    check = 0;
                }
                n /= i;
            }
        }
        if (n > 1)
            res *= n;
        printf("%d\n", res);
    }
    return 0;
}