#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

struct Product
{
    int no;
    char name[1000];
    char group[1000];
    float profit;
} a[10000];

int main()
{
    // input
    int n;
    scanf("%d", &n);

    for (int t = 1; t <= n; t++)
    {
        a[t].no = t;
        scanf("\n");
        gets(a[t].name);
        gets(a[t].group);
        float x, y;
        scanf("%f %f", &x, &y);
        a[t].profit = y - x;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i].profit < a[j].profit)
            {
                struct Product tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i].no);
        printf("%s ", a[i].name);
        printf("%s ", a[i].group);
        printf("%.2f\n", a[i].profit);
    }
    return 0;
}