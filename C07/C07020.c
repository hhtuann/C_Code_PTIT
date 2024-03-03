#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */

struct pokemon
{
    char name[1000];
    int cnt;
} a[10000];
int main()
{
    // input
    int n;
    scanf("%d", &n);
    int sum = 0;
    int max = 0;
    char nameMax[1000] = {};
    for (int i = 1; i <= n; i++)
    {
        scanf("\n");
        gets(a[i].name);
        int k, m;
        scanf("%d %d", &k, &m);
        a[i].cnt = m / (k - 2);
        if (a[i].cnt > 0 && m - a[i].cnt * (k - 2) < 2)
            a[i].cnt--;
        sum += a[i].cnt;
        if (a[i].cnt > max)
        {
            max = a[i].cnt;
            strcpy(nameMax, a[i].name);
        }
    }
    printf("%d\n", sum);
    printf("%s", nameMax);
    return 0;
}