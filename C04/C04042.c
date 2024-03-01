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
int check(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j])
                return i;
        }
    }
    return 0;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int kt = check(a, n);
        if (kt)
            printf("%d\n", a[kt]);
        else
            printf("NO\n");
    }
    return 0;
}