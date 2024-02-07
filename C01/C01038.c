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
