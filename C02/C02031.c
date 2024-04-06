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
    int first_digit = (int)('A') - 2;
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j < 2 * i; j++)
        {
            printf("%c", first_digit + j);
        }
        printf("\n");
    }
    return 0;
}