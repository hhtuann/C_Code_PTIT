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
    char s[60];
    scanf("%s", &s);
    int a[100] = {};
    int b[100] = {};
    for (int i = 0; i < 100; i++)
        a[i] = -1;
    for (int i = 0; i < 52; i++)
    {
        if (a[s[i]] == -1)
            a[s[i]] = i;
        else
            b[s[i]] = i;
    }
    int cnt = 0;
    for (int i = 'A'; i <= 'Z'; i++)
        for (int j = 'A'; j <= 'Z'; j++)
            if (a[i] < a[j] && a[j] < b[i] && b[i] < b[j])
                cnt++;
    printf("%d", cnt);
    return 0;
}