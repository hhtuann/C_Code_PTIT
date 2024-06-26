#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

char a[1005][1005];

void swap(char a[][1005], int m, int n)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            a[i][j] = a[i][j] == '0' ? '1' : '0';
        }
    }
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] == '1')
            {
                swap(a, i, j);
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}