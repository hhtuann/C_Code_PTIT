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
int check(int n)
{
    int m = n % 10;
    n /= 10;
    while (n)
    {
        int k = n % 10;
        if (k <= m)
            return 0;
        m = k;
        n /= 10;
    }
    return 1;
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (check(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
}