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
void SelectionSort2(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = i;
        int min = a[i];
        for (int j = i + 1; j <= n; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        }
        int tmp = a[i];
        a[i] = a[pos];
        a[pos] = tmp;
        //printf("Buoc %d:", i);
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", a[i]);
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
    SelectionSort2(a, n);
    return 0;
}