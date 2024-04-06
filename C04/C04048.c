#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int a[10000];

int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    while (m--)
    {
        int x;
        scanf("%d", &x);
        a[0] = a[n + 1] = 1;
        for (int i = max(1, x - k); i <= min(n, x + k); i++)
        {
            a[i] = 1;
        }
    }
    int len = 1;
    int cnt = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        if (a[i] == 0 && a[i - 1] == 0)
        {
            len++;
        }
        if (a[i] == 1 && a[i - 1] == 0)
        {
            cnt += (len + 2 * k) / (2 * k + 1);
            len = 1;
        }
    }
    printf("%d", cnt);
    return 0;
}