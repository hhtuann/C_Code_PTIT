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
struct Triangle
{
    float a, b, c;
    float S;
};
int main()
{
    // input
    int n;
    scanf("%d", &n);
    struct Triangle f[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%f%f%f", &f[i].a, &f[i].b, &f[i].c);
        int p = (f[i].a + f[i].b + f[i].c) * 0.5;
        f[i].S = sqrt(p * (p - f[i].a) * (p - f[i].b) * (p - f[i].c));
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (f[j].S > f[j + 1].S)
            {
                struct Triangle tmp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%1.f %1.f %1.f\n", f[i].a, f[i].b, f[i].c);
}