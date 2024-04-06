#include <stdio.h>
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
    int begin;
    int end = n % 10;
    while (n)
    {
        begin = n % 10;
        n /= 10;
    }
    printf("%d %d", begin, end);
    return 0;
}
