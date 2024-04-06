#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

struct Guest
{
    int t, d;
} a[1000], tmp;
void BubbleSort(int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a[j].t > a[j + 1].t)
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a[i].t, &a[i].d);
    }
    BubbleSort(n);
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        time = max(time, a[i].t) + a[i].d;
    }
    printf("%d", time);
    return 0;
}