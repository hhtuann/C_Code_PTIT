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
int thangHang(double a1, double b1, double a2, double b2, double a3, double b3)
{
    return (a2 - a1) * (b3 - b1) == (a3 - a1) * (b2 - b1);
}
double length(double a1, double b1, double a2, double b2)
{
    return sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double a1, b1, a2, b2, a3, b3;
        scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &a2, &b2, &a3, &b3);
        if (thangHang(a1, b1, a2, b2, a3, b3))
            printf("INVALID");
        else
        {
            double d1 = length(a1, b1, a2, b2);
            double d2 = length(a1, b1, a3, b3);
            double d3 = length(a2, b2, a3, b3);
            printf("%.3lf", d1 + d2 + d3);
        }
        printf("\n");
    }
    return 0;
}