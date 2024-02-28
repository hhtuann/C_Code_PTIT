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
void solve(int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int left_x = 1; // góc trên bên trái
    int left_y = 1;
    int right_x = m; // góc dưới bên phải;
    int right_y = n;
    // x ngang
    // y dọc
    int x = n * m;
    while (x)
    {
        for (int i = left_x; i <= right_x && x > 0; i++, x--)
            printf("%d ", a[left_y][i]);
        for (int i = left_y + 1; i <= right_y && x > 0; i++, x--)
            printf("%d ", a[i][right_x]);
        for (int i = right_x - 1; i >= left_x && x > 0; i--, x--)
            printf("%d ", a[right_y][i]);
        for (int i = right_y - 1; i > left_y && x > 0; i--, x--)
            printf("%d ", a[i][left_x]);
        left_x++;
        left_y++;
        right_x--;
        right_y--;
    }
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        solve(n, m);
        printf("\n");
    }
    return 0;
}