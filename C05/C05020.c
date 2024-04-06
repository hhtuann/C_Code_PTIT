#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

LL a[1005][1005];
LL f[1000];

void solve(int n)
{
    int left = 1;  // góc trên bên trái
    int right = n; // góc dướI bên phải;
    int x = 1;
    while (x <= n * n)
    {
        for (int i = left; i <= right; i++)
            a[left][i] = f[x++];
        for (int i = left + 1; i <= right; i++)
            a[i][right] = f[x++];
        for (int i = right - 1; i >= left; i--)
            a[right][i] = f[x++];
        for (int i = right - 1; i > left; i--)
            a[i][left] = f[x++];
        left++;
        right--;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    // input
    f[1] = 0;
    f[2] = 1;
    for (int i = 3; i <= 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}