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