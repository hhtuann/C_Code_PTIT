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
void chuanhoa(char s[])
{
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[2000];
        gets(s);
        char *token = strtok(s, " ");
        while (token != NULL)
        {
            chuanhoa(token);
            printf("%s ", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}