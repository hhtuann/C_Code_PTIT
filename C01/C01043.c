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
    int gt[20] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int n;
    scanf("%d", &n);
    int sum = 0;
    int tmp = n;
    while (n)
    {
        sum += gt[n % 10];
        n /= 10;
    }
    if (sum == tmp)
        printf("1");
    else
        printf("0");
    return 0;
}