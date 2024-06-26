#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void chuanHoa(char *s)
{
    for (int i = 0; i < strlen(s); i++)
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
    for (int t = 1; t <= test; t++)
    {
        printf("Test %d:", t);
        char s1[2000];
        char s2[200];
        gets(s1);
        gets(s2);
        chuanHoa(s2);
        char *token = strtok(s1, " ");
        while (token != NULL)
        {
            char tmp[2000];
            strcpy(tmp, token);
            chuanHoa(tmp);
            if (strcmp(tmp, s2))
                printf(" %s", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}
