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
int p[1000006] = {0};
int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void threeDigits()
{
    for (int i = 1; i <= 9; i += 2)
    {
        int n = i;
        for (int j = 0; j <= 9; j++)
        {
            int k = n * 10 + j;
            k = k * 10 + i; /// iji
            if (isPrime(k))
            {
                p[k] = 1;
            }
        }
    }
}
void fourDigits()
{
    for (int i = 1; i <= 9; i += 2)
    {
        int n = i;
        for (int j = 0; j <= 9; j++)
        {
            int k = n * 10 + j;
            k = k * 10 + j;
            k = k * 10 + i; /// ijji
            if (isPrime(k))
            {
                p[k] = 1;
            }
        }
    }
}
void fiveDigits()
{
    for (int i = 1; i <= 9; i += 2)
    {
        int n = i;
        for (int j = 0; j <= 9; j++)
        {
            int k = n * 10 + j;
            for (int x = 0; x <= 9; x++)
            {
                int t = k * 10 + x;
                t = t * 10 + j;
                t = t * 10 + i; /// ijxji
                if (isPrime(t))
                {
                    p[t] = 1;
                }
            }
        }
    }
}
void SoThuanNghich()
{
    p[2] = p[5] = p[7] = p[11] = 1;
    threeDigits();
    fourDigits();
    fiveDigits();
}
int main()
{
    SoThuanNghich();
    // input
    int test;
    scanf("%d", &test);
    int a, b;
    while (test--)
    {
        int cnt = 0;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            if (p[i] == 1)
            {
                cnt++;
                if (cnt > 10)
                {
                    printf("\n");
                    cnt = 1;
                }
                printf("%d ", i);
            }
        }
        printf("\n\n");
    }

    return 0;
}