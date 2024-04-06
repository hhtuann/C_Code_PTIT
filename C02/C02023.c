#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int Min(int a, int b)
{
    return a < b ? a : b;
}
int Max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int m, n;
    scanf("%d %d", &m, &n);
    int first_digit = (int)('a') + Max(m, n) - 1;
    // printf("%d", (int)('a'));
    // printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= Min(i, n - 1); j++)
        {
            printf("%c", first_digit - j);
        }
        for (int j = i + 1; j < n; j++)
        {
            printf("%c", first_digit - i);
        }
        printf("\n");
    }
    return 0;
}