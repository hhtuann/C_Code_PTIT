#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

const int inf = (int)(1e9 + 7);

void turn(char s1[], char s2[]) // xoay s1 thành s2
{
    int n = strlen(s1);
    for (int i = 0; i < n - 1; i++)
    {
        s2[i] = s1[i + 1];
    }
    s2[n - 1] = s1[0];
}
int main()
{
    // input
    char a[100][100], s[100][100];
    int cnt[100] = {};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s[i]);
    }
    strcpy(a[0], s[0]);
    int len = strlen(s[0]);
    for (int i = 1; i < len; i++)
    {
        turn(a[i - 1], a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int j = 0; j < len; j++)
        {
            if (strcmp(s[i], a[j]) == 0)
            {
                cnt[j]++;
                check = 1;
                break;
            }
        }
        if (!check)
        {
            printf("-1");
            return 0;
        }
    }
    int min = inf;
    for (int i = 0; i < len; i++)
    {
        // nếu đổi tất cả thành a[i]
        int sum = 0;
        for (int j = 0; j < len; j++)
        {
            if (j <= i)
                sum += cnt[j] * (i - j);
            else
                sum += cnt[j] * (len - j + i);
        }
        if (sum < min)
            min = sum;
    }
    printf("%d", min);
    return 0;
}