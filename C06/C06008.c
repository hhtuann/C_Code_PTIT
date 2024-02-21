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
    char s[1000];
    gets(s);
    char *t1 = strtok(s, " ");
    printf("%s\n", t1);
    printf("%s\n", s);
    while (t1 != NULL)
    {
        t1 = strtok(NULL, " ");
        printf("%s\n", t1);
        printf("%s\n", s);
    }
    return 0;
}