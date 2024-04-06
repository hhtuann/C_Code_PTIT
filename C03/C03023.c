#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int check(int n)
{
    int nRev = 0;
    int N = n;
    int kt = 1;
    while (n)
    {
        nRev = nRev * 10 + n % 10;
        if (n % 10 == 9)
        {
            kt = 0;
            break;
        }

        n /= 10;
    }
    if (N == nRev && kt == 1)
        return 1;
    return 0;
}
int main()
{
    // input
    int a;
    scanf("%d", &a);
    int cnt = 0;
    for (int i = 2; i < a; i++)
    {
        if (check(i))
        {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n%d", cnt);
    return 0;
}