#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void BubbleSort(int a[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    // input
    int n;
    int a[10000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}