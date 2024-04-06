#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void sort(LL a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        for (int j = i + 1; j <= r; j++)
        {
            if (a[i] > a[j])
            {
                LL tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int find(LL x, LL a[], int l, int r)
{
    int i = l;
    int j = r;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (a[mid] == x)
            return 1;
        if (a[mid] < x)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return 0;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        LL a[5005];
        for (int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
            a[i] *= a[i];
        }
        sort(a, 1, n);
        // for (int i = 1; i <= n; i++)
        //     printf("%lld ", a[i]);
        int check = 1;
        for (int i = 1; i <= n - 2 && check; i++)
        {
            for (int j = i + 1; j < n && check; j++)
            {
                if (find(a[i] + a[j], a, j + 1, n))
                    check = 0;
            }
        }
        if (check)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}