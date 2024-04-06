#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int m[20] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void solve(int n)
{
    int cnt = 0;
    for (int i = 9; i >= 0; i--)
    {
        while (n >= m[i])
        {
            n -= m[i];
            cnt++;
        }
    }
    printf("%d\n", cnt);
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
        solve(n);
    }
    return 0;
}