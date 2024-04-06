#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int lcm(int a, int b)
{
    int s = a * b;
    while (a * b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return s / (a + b);
}
void solve(int *a, int n)
{
    a[0] = 1;
    a[n + 1] = 1;
    for (int i = 1; i <= n + 1; i++)
    {
        printf("%d ", lcm(a[i], a[i - 1]));
    }
    printf("\n");
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
        int a[10000];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        solve(a, n);
    }
    return 0;
}