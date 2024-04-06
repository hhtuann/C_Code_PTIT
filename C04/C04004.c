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
    long long a[100];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= 92; i++)
        a[i] = a[i - 1] + a[i - 2];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", a[n]);
    }
    return 0;
}