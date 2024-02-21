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
void solve()
{
    int n;
    scanf("%d", &n);
    int maxx = -inf;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (isPrime(a[i]))
            cnt[a[i]]++;
        if(a[i]> maxx) maxx = a[i];
    }
    for (int i = 1; i <= maxx; i++)
    {
        if (cnt[i])
        {
            printf("%d xuat hien %d lan\n", i, cnt[i]);
            cnt[i] = 0;
        }
    }
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        printf("Test %d:\n", i);
        solve();
    }

    return 0;
}