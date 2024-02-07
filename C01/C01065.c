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
int a[20];
int cnt[20];
int prime[20] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0};
int main()
{
    // input
    LL n;
    scanf("%lld", &n);
    int d = 0;
    while (n)
    {
        cnt[n % 10]++;
        a[d++] = n % 10;
        n /= 10;
    }
    for (int i = d; i >= 0; --i)
    {
        if (prime[a[i]])
        {
            printf("%d %d\n", a[i], cnt[a[i]]);
            prime[a[i]] = 0;
        }
    }
    return 0;
}