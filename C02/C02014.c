#include <stdio.h>
#include <math.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int Max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = -n + 1; i <= n - 1; i++)
    {
        for (int j = -n + 1; j <= n - 1; j++)
        {
            int a = Max(abs(i), abs(j)) + 1;
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}