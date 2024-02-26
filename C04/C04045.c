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
    int even = 0;
    int odd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2)
            odd++;
        else
            even++;
    }
    if (odd == even)
        return 0;
    return n % 2 == odd > even;
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n = 0;
        int a[1000];
        while (scanf("%d", &a[++n]) != -1)
        {
            char c = getchar();
            if (c == '\n')
                break;
        }
        if (check(a, n))
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}