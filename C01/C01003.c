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
    for (int i = 0; i < test; ++i)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", n * n);
    }
    return 0;
}