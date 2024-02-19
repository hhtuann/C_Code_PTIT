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
int cnt[100005];
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        cnt[a]++;
        cnt[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == n - 1)
        {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}