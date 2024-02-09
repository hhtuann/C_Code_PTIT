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
int Max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int m;
    scanf("%d", &m);
    int first_digit = (int)('a') - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = i * (i - 1) / 2 + 1; j <= i * (i + 1) / 2 && i % 2; j++)
        {
            printf("%c\t", first_digit + j);
        }
        for (int j = i * (i + 1) / 2; j > i * (i - 1) / 2 && i % 2 == 0; j--)
        {
            printf("%c\t", first_digit + j);
        }
        printf("\n");
    }
    return 0;
}