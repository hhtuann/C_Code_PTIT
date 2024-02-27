#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
int check(char s[])
{
    int even = 0;
    int odd = 0;
    if (s[0] == '0')
        return -1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if (s[i] % 2)
                odd++;
            else
                even++;
        }
        else
            return -1;
    }
    if (odd == even)
        return 0;
    return odd > even == strlen(s) % 2;
}
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[2000];
        gets(s);
        if (check(s) == -1)
            printf("INVALID\n");
        else if (check(s) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}