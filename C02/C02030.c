#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n;
    scanf("%d", &n);
    int first_digit = (int)('A') - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = -2 * i; j <= 2 * i; j += 2)
        {
            printf("%c", first_digit + 2 * i - abs(j));
        }
        printf("\n");
    }
    return 0;
}