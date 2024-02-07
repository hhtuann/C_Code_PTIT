#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
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
        if(first_digit == last_digit) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}