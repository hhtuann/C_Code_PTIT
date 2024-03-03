#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)

/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
struct PhanSo
{
    int tu, mau;
};
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
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
void RutGon(struct PhanSo *a)
{
    int d = gcd(a->tu, a->mau);
    (a->tu) /= d;
    (a->mau) /= d;
}
void QuyDong(struct PhanSo *a, struct PhanSo *b)
{
    int LCM = lcm(a->mau, b->mau);
    int x = LCM / (a->mau);
    int y = LCM / (b->mau);
    a->tu *= x;
    b->tu *= y;
    a->mau = b->mau = LCM;
}
int main()
{
    // input
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        printf("Case #%d:\n", t);
        struct PhanSo a, b;
        scanf("%d %d %d %d", &a.tu, &a.mau, &b.tu, &b.mau);
        RutGon(&a);
        RutGon(&b);
        QuyDong(&a, &b);
        printf("%d/%d %d/%d\n", a.tu, a.mau, b.tu, b.mau);
        struct PhanSo sum;
        sum.tu = a.tu + b.tu;
        sum.mau = a.mau;
        RutGon(&sum);
        printf("%d/%d\n", sum.tu, sum.mau);
        struct PhanSo product;
        product.tu = a.tu * b.mau;
        product.mau = a.mau * b.tu;
        RutGon(&product);
        printf("%d/%d\n", product.tu, product.mau);
    }
    return 0;
}