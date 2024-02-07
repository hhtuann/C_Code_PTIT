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
int main()
{
    // input
    int a, b;
    LL sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}