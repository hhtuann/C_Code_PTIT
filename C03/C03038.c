#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

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
        int n, p;
        scanf("%d %d", &n, &p);
        int cnt = 0;
        for (int i = p; i <= n; i += p)
        {
            int tmp = i;
            while (tmp % p == 0)
            {
                cnt++;
                tmp /= p;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
