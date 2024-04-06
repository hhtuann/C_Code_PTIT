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
    int begin = n % 10;
    int end = n % 10;
    int tmp = n;
    n /= 10;
    int cnt = 1;
    while (n)
    {
        cnt *= 10;
        begin = n % 10;
        n /= 10;
    }
    int res = end * cnt + tmp % cnt - end + begin;
    printf("%d", res);
    return 0;
}
