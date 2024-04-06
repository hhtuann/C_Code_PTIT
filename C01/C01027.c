#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int FindGCD(int a, int b)
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
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", FindGCD(a, b));
        }
    return 0;
}