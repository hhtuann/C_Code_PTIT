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
void addZero(char s[])
{
    for (int i = strlen(s); i > 0; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = '0';
}
void removeZero(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = s[i + 1];
    }
}
void solve(char s[])
{
    char s1[1000] = {}, s2[1000] = {};
    if (strlen(s) % 2 == 1)
        s1[0] = '0';
    for (int i = strlen(s) % 2; i < (strlen(s) + 1) / 2; i++)
        s1[i] = s[i - strlen(s) % 2];

    for (int i = 0; i < (strlen(s) + 1) / 2; i++)
    {
        s2[i] = s[i + (int)(strlen(s) / 2)];
    }
    addZero(s1);
    addZero(s2);
    int tmp = 0;
    char sum[1000];
    strcpy(sum, s1);
    for (int i = strlen(s1) - 1; i > 0; i--)
    {
        int t = s1[i] + s2[i] - 2 * '0' + tmp;
        tmp = t / 10;
        sum[i] = t % 10 + '0';
    }
    if (tmp)
        sum[0] = '1';
    else
        removeZero(sum);
    strcpy(s, sum);
}
int main()
{
    // input
    char s[1000];
    gets(s);
    while(strlen(s) > 1)
    {
        solve(s);
        printf("%s\n", s);
    }
    return 0;
}