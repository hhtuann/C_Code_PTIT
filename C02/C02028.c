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
    int m;
    scanf("%d", &m);
    int first_digit = (int)('A') - 1;
    for (int i = 1; i <= 2 * m - 1; i += 2)
    {
        for (int j = i; j <= 2 * m - 1; j += 2)
        {
            printf("%c", first_digit + j);
        }

        printf("\n");
    }
    return 0;
}