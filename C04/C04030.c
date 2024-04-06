#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void BubbleSort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
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
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        int a[200];
        int b[200];
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);
        BubbleSort(a, n);
        BubbleSort(b, n);
        printf("Test %d:\n", t);
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
                printf("%d ", a[i / 2]);
            else
                printf("%d ", b[n - i / 2 - 1]);
        }
        printf("\n");
    }
    return 0;
}