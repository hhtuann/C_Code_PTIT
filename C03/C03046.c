#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int check(int n)
{
    int n_old = n;
    int n_new = 0;
    int sum = 0;
    while (n)
    {
        int k = n % 10;
        if (k == 4)
            return 0;
        sum += k;
        n_new = n_new * 10 + k;
        n /= 10;
    }
    if (n_new == n_old && sum % 10 == 0)
        return 1;
    return 0;
}
int POW(int a, int b)
{
    int res = 1;
    for (int i = 1; i <= b; i++)
        res *= a;
    return res;
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
        for (int i = POW(10, n - 1); i < POW(10, n); i++)
        {
            if (check(i))
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
