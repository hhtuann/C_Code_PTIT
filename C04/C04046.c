#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

const int inf = (int)(1e9 + 7);

void sort(LL a[], int l, int r)
{
    LL mid = a[(l + r) / 2];
    int i = l, j = r;
    while (i <= j)
    {
        while (a[i] < mid)
            i++;
        while (mid < a[j])
            j--;
        if (i <= j)
        {
            LL tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
        if (i < r)
            sort(a, i, r);
        if (l < j)
            sort(a, l, j);
    }
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
        LL a[100005];
        for (int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }
        sort(a, 1, n);
        LL min = 2 * inf;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] - a[i - 1] < min)
            {
                min = a[i] - a[i - 1];
            }
        }
        int cnt = 0;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] - a[i - 1] == min)
            {
                cnt++;
            }
        }
        printf("%lld %d\n", min, cnt);
    }
    return 0;
}