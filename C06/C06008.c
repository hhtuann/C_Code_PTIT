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
    char ds[100][50];
    int n = 0;
    char *t = strtok(s, " ");
    while (t != NULL)
    {
        strcpy(ds[++n], t);
        t = strtok(NULL, " ");
    }
    printf("%s ", ds[1]);
    for (int i = 2; i <= n; i++)
    {
        int j;
        for (j = 1; j < i; j++)
        {
            if (strcmp(ds[i], ds[j]) == 0)
                break;
        }
        if (j == i)
            printf("%s ", ds[i]);
    }
    return 0;
}