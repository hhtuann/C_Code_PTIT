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
    int cnt = 0;
    while (n)
    {
        cnt++;
        n /= 10;
    }
    printf("%d", cnt);
    return 0;
}