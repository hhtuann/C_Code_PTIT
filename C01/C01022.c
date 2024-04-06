#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}