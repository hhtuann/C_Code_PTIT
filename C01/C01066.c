#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
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