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
    char s[100];
    gets(s);
    char *token = strtok(s, " ");
    char name[100];
    strcpy(name, token);
    while (token != NULL)
    {
        token = strtok(NULL, " ");
        if (token != NULL)
        {
            if (name[0] >= 'A' && name[0] <= 'Z')
                name[0] += 32;
            printf("%c", name[0]);
            strcpy(name, token);
        }
        else
        {
            for (int i = 0; i < strlen(name); i++)
            {
                if (name[i] >= 'A' && name[i] <= 'Z')
                    name[i] += 32;
            }
            printf("%s@ptit.edu.vn", name);
        }
    }
    return 0;
}