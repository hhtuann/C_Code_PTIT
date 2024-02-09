#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
int gcd(int a, int b)
{
    while (a * b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a + b;
}
int main()
{
    // input
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++)
    {
        for (int j = i + 1; j <= b; j++)
        {
            if (gcd(i, j) == 1)
                printf("(%d,%d)\n", i, j);
        }
    }
    return 0;
}