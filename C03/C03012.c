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
void fibonacci()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        // printf("%lld\n", f[i]);
    }
}
int main()
{
    // input
    fibonacci();
    LL n;
    scanf("%lld", &n);
    int i = 0;
    while (n >= f[i])
    {
        if (n == f[i])
        {
            printf("1");
            return 0;
        }
        i++;
    }
    printf("0");
    return 0;
}