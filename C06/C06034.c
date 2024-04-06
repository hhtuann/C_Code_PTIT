#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int value(char c)
{
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    return 1000;
}
int solve1(char s[])
{
    if (strlen(s) == 0)
        return 0;
    if (strlen(s) == 1)
        return value(s[0]);
    int max = 0;
    int pos = -1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (value(s[i]) > max)
        {
            max = value(s[i]);
            pos = i;
        }
    }
    char s1[1000] = {};
    char s2[1000] = {};
    strncpy(s1, s, pos);
    strncpy(s2, s + pos + 1, strlen(s) - pos - 1);
    return max + solve1(s2) - solve1(s1);
}
int solve2(char s[])
{
    int max = 0;
    int ans = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (value(s[i]) >= max)
        {
            ans += value(s[i]);
            max = value(s[i]);
        }
        else
        {
            ans -= value(s[i]);
        }
    }
    return ans;
}
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[1000];
        gets(s);
        int ans = solve1(s);
        // int ans = solve2(s);
        printf("%d\n", ans);
    }
    return 0;
}