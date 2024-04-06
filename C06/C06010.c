#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int check(char *s)
{
    for (int i = 0; i <= (strlen(s) - 1) / 2; i++)
    {
        if ((s[i] - '0') % 2)
            return 0;
        if (s[i] != s[strlen(s) - i - 1])
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[1000];
        gets(s);
        if (check(s))
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}