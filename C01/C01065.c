#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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