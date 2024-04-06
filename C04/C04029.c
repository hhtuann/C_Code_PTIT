#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void BubbleSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int check = 1;
        for (int j = 1; j <= n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                check = 0;
            }
        }
        if (check)
            return;
        printf("Buoc %d: ", i);
        for (int j = 1; j <= n; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    return 0;
}