#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
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