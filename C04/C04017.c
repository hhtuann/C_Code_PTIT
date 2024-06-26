#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int a[100000];
int cnt[1000000];

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (isPrime(a[i]))
        {
            cnt[a[i]] = 1;
            ans++;
        }
    }
    printf("%d ", ans);
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]])
            printf("%d ", a[i]);
    }
    return 0;
}