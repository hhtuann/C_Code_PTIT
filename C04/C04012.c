#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int a[100000];
int cnt[1000000];

int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int check = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] > 1)
        {
            printf("%d ", a[i]);
            cnt[a[i]] = 0;
            check = 1;
        }
    }
    if (check == 0)
        printf("0");
    return 0;
}