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
int a[20];
int cnt[20];
int main()
{
    // input
    long long n;

    scanf("%lld", &n);
    int d = 0;
    while (n)
    {
        int k = n % 10;
        a[++d] = k;
        if (k == 2 || k == 3 || k == 5 || k == 7)
            cnt[k]++;
        n/=10;
    }
    for (int i = d; i > 0; i--)
    {
        if (cnt[a[i]])
        {
            printf("%d %d\n", a[i], cnt[a[i]]);
            cnt[a[i]] = 0;
        }
    }
    return 0;
}