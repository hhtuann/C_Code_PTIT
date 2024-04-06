#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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