#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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
    int a[100][100];
    int cnt[100] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
            if (isPrime(a[i][j]))
                cnt[i]++;
            else
                a[i][j] = 0;
        }
    }
    int max = 0;
    int row = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] > max)
        {
            max = cnt[i];
            row = i;
        }
    }
    printf("%d\n", row);
    for (int i = 1; i <= n; i++)
    {
        if (a[row][i])
            printf("%d ", a[row][i]);
    }
    return 0;
}