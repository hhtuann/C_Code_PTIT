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