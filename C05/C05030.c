#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

char a[1005][1005];

int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int m, n;
        scanf("%d %d", &n, &m);
        int row1[1005] = {};
        int row2[1005] = {};
        int col1[1005] = {};
        int col2[1005] = {};
        for (int i = 0; i < n; i++)
        {
            scanf("%s", &a[i]);
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '1')
                {
                    col1[j]++;
                    row1[i]++;
                }
                else if (a[i][j] == '2')
                {
                    col2[j]++;
                    row2[i]++;
                }
            }
        }
        LL cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '1')
                {
                    cnt += col2[j] * row2[i];
                }
                else if (a[i][j] == '2')
                {
                    cnt += col1[j] * row1[i];
                }
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}