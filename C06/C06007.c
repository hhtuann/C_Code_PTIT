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
    char s1[1000];
    char s2[1000];
    gets(s1);
    gets(s2);
    char *t = strtok(s1, " ");
    while (t != NULL)
    {
        if(strcmp(t, s2) != 0)
            printf("%s ", t);
        t = strtok(NULL, " ");
    }
    return 0;
}