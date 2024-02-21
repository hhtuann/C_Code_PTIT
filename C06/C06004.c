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
int isAlpha(char s)
{
    return ('a' <= s && s <= 'z' || 'A' <= s && s <= 'Z');
}
int isNum(char s)
{
    return '0' <= s && s <= '9';
}
int main()
{
    // input
    char s[100000];
    gets(s);
    int alpha = 0;
    int num = 0;
    int tmp = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isAlpha(s[i]))
            alpha++;
        else if (isNum(s[i]))
            num++;
        else
            tmp++;
    }
    printf("%d %d %d", alpha, num, tmp);
    return 0;
}
