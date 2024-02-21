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
    while (test--)
    {
        LL n;
        scanf("%lld", &n);
        int a = n % 10;
        n /= 10;
        while (n)
        {
            if (a < n % 10)
                break;
            a = n % 10;
            n /= 10;
        }
        if (n)
            printf("NO");
        else
            printf("YES");
        printf("\n");
    }
    return 0;
}