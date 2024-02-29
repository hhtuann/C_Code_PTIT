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
struct Array
{
    int val;
    int cnt;
} a[100005];
int check(int n)
{
    int x = 9;
    while (n)
    {
        int k = n % 10;
        if (k > x)
            return 0;
        x = k;
        n /= 10;
    }
    return 1;
}
int cmp(struct Array x, struct Array y)
{
    return x.cnt > y.cnt;
}
int find(int x, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        if (a[i].val == x)
            return i;
    }
    return 0;
}
int main()
{
    // input
    int x;
    int n = 0;
    while (scanf("%d", &x) != -1)
    {
        if (check(x))
        {
            if (find(x, 1, n))
            {
                a[find(x, 1, n)].cnt++;
            }
            else
            {
                a[++n].val = x;
                a[n].cnt = 1;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (!cmp(a[i], a[j]))
            {
                struct Array tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%d %d\n", a[i].val, a[i].cnt);
    return 0;
}