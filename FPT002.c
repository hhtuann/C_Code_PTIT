#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int a[1000][1000];
int b[1000][1000];
int c[1000][1000];
int res1[1000][1000];
int res2[1000][1000];

void nhapMang(int a[][1000], int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void inMang(int a[][1000], int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void nhanMatrix(int multi[][1000], int a[][1000], int b[][1000], int m, int n, int p)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= p; k++)
            {
                multi[i][k] += a[i][j] * b[j][k];
            }
        }
    }
}
int main()
{
    // input
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);
    nhapMang(a, m, n);
    nhapMang(b, n, p);
    nhapMang(c, p, q);
    nhanMatrix(res1, a, b, m, n, p);
    nhanMatrix(res2, res1, c, m, p, q);
    inMang(res2, m, q);
    return 0;
}