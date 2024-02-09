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
LL f[105];
void fibonacci(int n)
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        // printf("%lld\n", f[i]);
    }
}
int main()
{
    // input
    LL n;
    scanf("%lld", &n);
    fibonacci(n);
    for (int i = 0; i < n; i++)
        printf("%lld ", f[i]);
    return 0;
}