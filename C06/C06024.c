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

void addZero(char *s) // thêm 1 chữ số 0 phía trước
{
    for (int i = strlen(s); i > 0; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = '0';
}

void removeZero(char *s) // xóa 1 chữ số 0 phía trước
{
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = s[i + 1];
    }
}
void solve(char *s1, char *s2)
{
    while (strlen(s1) < strlen(s2))
        addZero(s1);
    while (strlen(s2) < strlen(s1))
        addZero(s2);
    addZero(s1);
    addZero(s2);
    int tmp = 0;
    char sum[1000];
    strcpy(sum, s1);
    for (int i = strlen(s1) - 1; i > 0; i--)
    {
        int t = s1[i] + s2[i] - 2 * '0' + tmp;
        tmp = t / 10;
        sum[i] = t % 10 + '0';
    }
    if (tmp)
        sum[0] = '1';
    else
        removeZero(sum);
    printf("%s\n", sum);
}
int main()
{
    // input
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s1[1000] = {};
        char s2[1000] = {};
        gets(s1);
        gets(s2);
        solve(s1, s2);
    }
    return 0;
}