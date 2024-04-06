#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

char s[1000005];

int main()
{
    // input
    char max;
    scanf("%s", s);
    int len = strlen(s);
    max = s[len - 1];
    for (int i = len - 2; i >= 0; i--)
    {
        if (s[i] >= max)
            max = s[i];
        else
            s[i] = '0';
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '0')
            printf("%c", s[i]);
    }
    return 0;
}