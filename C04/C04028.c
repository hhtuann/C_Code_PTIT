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
void InsertionSort(int *a, int n)
{
    int step = 1;
    for (int i = 2; i <= n; i++)
    {
        printf("Buoc %d: ", step - 1);
        for (int j = 1; j <= step; j++)
            printf("%d ", a[j]);
        printf("\n");
        step++;
        int key = a[i];
        int j = i - 1;
        while (j > 0 && key < a[j])
        {
            a[j + 1] = a[j]; // đẩy về sau
            j--;
        }
        a[j + 1] = key; // đưa key về trước
    }
    printf("Buoc %d: ", step - 1);
    for (int j = 1; j <= step; j++)
        printf("%d ", a[j]);
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
    InsertionSort(a, n);
    return 0;
}