#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void match(char s[], char s1[], char s2[])
{
    int n = strlen(s1);
    for (int i = 0; i < 2 * n; i++)
    {
        if (i % 2 == 0)
            s[i] = s2[i / 2];
        else
            s[i] = s1[i / 2];
    }
}
void solve(char s1[], char s2[], char target[])
{
    int n = strlen(s1);
    char s[1000] = {};
    char begin[1000];
    match(s, s1, s2);
    strcpy(begin, s);
    int cnt = 1;
    while (strcmp(s, target) != 0)
    {
        strncpy(s1, s, n);
        strncpy(s2, s + n, n);
        match(s, s1, s2);
        cnt++;
        if (strcmp(s, begin) == 0)
        {
            cnt = -1;
            break;
        }
    }
    printf("%d\n", cnt);
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    while (n)
    {
        char s1[1000];
        char s2[1000];
        char target[1000];
        scanf("%s\n%s\n%s", &s1, &s2, &target);
        solve(s1, s2, target);
        scanf("%d", &n);
    }
    return 0;
}