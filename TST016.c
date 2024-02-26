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
char s[10000];
int a[10], b[10];
int check()
{
    for (int i = 1; i <= 3; i++)
        if (a[i] != b[i])
            return 0;
    return a[4] % 2 == 0 && b[4] % 2 == 0;
}
int main()
{
    // input
    scanf("%s", &s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            a[1]++;
        else if (s[i] == ')')
            b[1]++;
        else if (s[i] == '[')
            a[2]++;
        else if (s[i] == ']')
            b[2]++;
        else if (s[i] == '{')
            a[3]++;
        else if (s[i] == '}')
            b[3]++;
        else if (s[i] == '"')
            a[4]++;
        else
            b[4]++;
    }
    if (check())
        printf("1");
    else
        printf("0");
    return 0;
}