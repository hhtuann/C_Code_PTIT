#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
int main()
{
    // input
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
            printf("NO");
        else
            printf("%.2f", -c / b);
    }
    else
    {
        int delta = b * b - 4 * a * c;
        if (delta < 0)
            printf("NO");
        else if (delta == 0)
            printf("%.2f", -b / 2 / a);
        else
        {
            printf("%.2f %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
        }
    }
    return 0;
}