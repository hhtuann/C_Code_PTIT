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
int a[1005][1005];
int p[1000];
void solve(int n)
{
    int left = 1;  // góc trên bên trái
    int right = n; // góc dướI bên phải;
    int x = 1;
    while (x <= n*n)
    {
        for (int i = left; i <= right; i++)
            a[left][i] = p[x++];
        for (int i = left + 1; i <= right; i++)
            a[i][right] = p[x++];
        for (int i = right - 1; i >= left; i--)
            a[right][i] = p[x++];
        for (int i = right - 1; i > left; i--)
            a[i][left] = p[x++];
        left++;
        right--;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
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
    int cnt = 0;
    for (int i = 1; i <= 500; i++)
    {
        if (isPrime(i))
            p[++cnt] = i;
    }
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        printf("Test %d:\n", t);
        int n;
        scanf("%d", &n);
        solve(n);
    }
    return 0;
}