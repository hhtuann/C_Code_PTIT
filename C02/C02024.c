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
    int m, n;
    scanf("%d %d", &m, &n);
    int first_digit = (int)('A');
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
            printf("%c", first_digit + j);
        for (int j = Min(i - 1, n - 1); j >= 0; j--)
            printf("%c", first_digit + j);
        printf("\n");
    }
    return 0;
}