#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int last_digit = n % 10;
        n /= 10;
        int first_digit;
        while (n)
        {
            first_digit = n % 10;
            n /= 10;
        }
        if (first_digit == last_digit)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}