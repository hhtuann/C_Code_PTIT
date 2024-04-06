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
        int cnt = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    cnt++;
                if (n / i != i && (n / i) % 2 == 0)
                    cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}