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
    if (s[0] != '8' || s[strlen(s) - 1] != '8')
        return 0;
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        sum += s[i] - '0';
        sum %= 10;
    }
    return !sum;
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