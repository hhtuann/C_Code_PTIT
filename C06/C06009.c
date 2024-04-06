#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int sanhtien(char s[]) // sảnh tiến
{
    for (int i = 0; i < 4; i++)
    {
        if (s[i] >= s[i + 1])
            return 0;
    }
    return 1;
}
int nguquy(char s[]) // ngũ quý
{
    if (s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
        return 1;
    for (int i = 0; i < 4; i++)
        if (s[i] != s[i + 1])
            return 0;
    return 1;
}
int locphat(char s[]) // lộc phát
{
    for (int i = 0; i < 5; i++)
    {
        if (s[i] != '6' && s[i] != '8')
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[100];
        gets(s);
        char bs[10];
        bs[0] = s[6];
        bs[1] = s[7];
        bs[2] = s[8];
        bs[3] = s[10];
        bs[4] = s[11];
        if (sanhtien(bs) || nguquy(bs) || locphat(bs))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}