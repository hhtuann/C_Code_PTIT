#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n, k;
    scanf("%d %d", &n, &k);
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        int d = i;
        while (d % 2 == 0)
        {
            cnt++;
            d /= 2;
        }
    }
    if (cnt >= k)
        printf("Yes");
    else
        printf("No");
    return 0;
}