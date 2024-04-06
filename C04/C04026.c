#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void InterchangeSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("Buoc %d:", i);
        for (int i = 1; i <= n; i++)
        {
            printf(" %d", a[i]);
        }
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
    InterchangeSort(a, n);
    return 0;
}