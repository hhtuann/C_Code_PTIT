#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
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
