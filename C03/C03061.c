#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int check(char s[])
{
    if (s[0] - '0' != (s[strlen(s) - 1] - '0') * 2 && (s[0] - '0') * 2 != s[strlen(s) - 1] - '0')
        return 0;
    for (int i = 1; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[20];
        scanf("%s", s);
        if (check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}