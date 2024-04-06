#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int stoi(char s[])
{
    int ans = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        ans = ans * 10 + (s[i] - '0');
    }
    return ans;
}
void add(char s[], int cnt[])
{
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        if (strlen(token) != 1)
        {
            int pos = -1; // vị trí kí tự 'x'
            for (int i = 0; token[i] != '^'; i++)
            {
                pos = i;
            }
            char a[100] = {};
            strncpy(a, token, pos - 1);
            int HeSo = stoi(a);
            char b[100] = {};
            strncpy(b, token + pos + 2, strlen(token) - pos - 2);
            int exp = stoi(b);
            cnt[exp] += HeSo;
        }
        token = strtok(NULL, " ");
    }
}
char s1[100000] = {};
char s2[100000] = {};
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        gets(s1);
        gets(s2);
        int cnt[10005] = {};
        add(s1, cnt);
        add(s2, cnt);
        int check = 0;
        for (int i = 10000; i >= 0; i--)
        {
            if (cnt[i] > 0)
            {
                if (check)
                    printf(" + ");
                printf("%d*x^%d", cnt[i], i);
                check = 1;
            }
        }
        printf("\n");
    }
    return 0;
}