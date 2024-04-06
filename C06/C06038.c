#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int check(int a[], char s[], int k)
{
    int b[10] = {};
    int tmp = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        int tich = k * (s[i] - '0') + tmp;
        tmp = tich / 10;
        tich %= 10;
        b[tich]++;
    }
    if (tmp > 9)
    {
        b[tmp / 10]++;
        b[tmp % 10]++;
    }
    else if (tmp > 0)
        b[tmp]++;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}
int main()
{
    // input
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[100];
        scanf("%s", &s);
        int len = strlen(s);
        int a[10] = {};
        for (int i = 0; i < len; i++)
            a[s[i] - '0']++;
        int kt = 1;
        for (int i = 2; i <= len && kt; i++)
        {
            if (check(a, s, i) == 0)
            {
                kt = 0;
                break;
            }
        }
        if (kt)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}