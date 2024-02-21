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
        int n;
        scanf("%d", &n);
        int odd = 0;
        int even = 0;
        while (n)
        {
            int a = n % 10;
            if (a % 2)
                odd++;
            else
                even++;
            n /= 10;
        }
        printf("%d %d\n", odd, even);
    }
    return 0;
}