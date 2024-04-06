#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, n;
        char c;
        scanf("%d %d %c", &m, &n, &c);
        int a[100005];
        for (int i = 1; i <= m + n; i++)
            scanf("%d", &a[i]);
        if (c == 'T' || c == 'G')
        {
            sort(a, m + n);
            if (c == 'T')
                for (int i = 1; i <= m + n; i++)
                    printf("%d ", a[i]);
            else
                for (int i = m + n; i > 0; i--)
                    printf("%d ", a[i]);
        }
        else
        {
            if (c == 'F')
                for (int i = 1; i <= m + n; i++)
                    printf("%d ", a[i]);
            else
            {
                for (int i = m + 1; i <= m + n; i++)
                    printf("%d ", a[i]);
                for (int i = 1; i <= m; i++)
                    printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
