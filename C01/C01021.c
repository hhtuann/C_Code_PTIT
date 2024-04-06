#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}