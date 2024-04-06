#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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
        char sur[100];
        strcpy(sur, token);
        for (int i = 0; i < strlen(sur); i++)
        {
            if (sur[i] >= 'a' && sur[i] <= 'z')
                sur[i] -= 32;
        }
        int check = 0;
        while (token != NULL)
        {
            token = strtok(NULL, " ");
            if (token == NULL)
                break;
            chuanhoa(token);
            if (check)
                printf(" ");
            printf("%s", token);
            check = 1;
        }
        printf(", %s ", sur);
        printf("\n");
    }
    return 0;
}