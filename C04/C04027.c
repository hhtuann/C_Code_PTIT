#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void SelectionSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = i;
        int min = a[i];
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        }
        int tmp = a[i];
        a[i] = a[pos];
        a[pos] = tmp;
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
    SelectionSort(a, n);
    return 0;
}