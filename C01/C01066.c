#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int Min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    // input
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", Min(a, min(b, c)));
    return 0;
}