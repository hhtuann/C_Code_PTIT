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
int main()
{
    // input
    int n;
    scanf("%d", &n);
    int left = 1;  // góc trên bên trái
    int right = n; // góc dướI bên phải;
    int x = 1;
    while (x <= n * n)
    {
        for (int i = left; i <= right; i++)
            a[left][i] = x++;
        for (int i = left + 1; i <= right; i++)
            a[i][right] = x++;
        for (int i = right - 1; i >= left; i--)
            a[right][i] = x++;
        for (int i = right - 1; i > left; i--)
            a[i][left] = x++;
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
    return 0;
}