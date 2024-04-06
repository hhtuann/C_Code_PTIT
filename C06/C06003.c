#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n;
    scanf("%d\n", &n);
    while (n--)
    {
        char s[1000];
        gets(s);
        int cnt = 0;
        char *t = strtok(s, " ");
        while (t != NULL)
        {
            cnt++;
            t = strtok(NULL, " ");
        }
        printf("%d\n", cnt);
    }
    return 0;
}