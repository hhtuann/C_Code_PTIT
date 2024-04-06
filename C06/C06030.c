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
    char s[50];
    char a[10005][50];
    int cnt[10005] = {0};
    int n = 0;
    int max = 0;
    while (scanf("%s", &s) != EOF)
    {
        if (strlen(s) >= max)
        {
            max = strlen(s);
            int check = 1;
            for (int i = n; i > 0; i--)
            {
                if (strcmp(s, a[i]) == 0)
                {
                    cnt[i]++;
                    check = 0;
                    break;
                }
            }
            if (check)
            {
                n++;
                strcpy(a[n], s);
                cnt[n] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (strlen(a[i]) == max)
        {
            printf("%s %d %d\n", a[i], max, cnt[i]);
        }
    }
    return 0;
}