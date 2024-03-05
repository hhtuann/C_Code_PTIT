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

void turn(char s1[], char s2[]) // xoay s1 thành s2
{
    int n = strlen(s1);
    for (int i = 0; i < n - 1; i++)
    {
        s2[i] = s1[i + 1];
    }
    s2[n - 1] = s1[0];
}

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
void Sum(char *s1, char *s2, char *res)
{
    while (strlen(s1) < strlen(s2))
        addZero(s1);
    while (strlen(s2) < strlen(s1))
        addZero(s2);
    addZero(s1);
    addZero(s2);
    int tmp = 0;
    strcpy(res, s1);
    for (int i = strlen(s1) - 1; i > 0; i--)
    {
        int t = s1[i] + s2[i] - 2 * '0' + tmp;
        tmp = t / 10;
        res[i] = t % 10 + '0';
    }
    if (tmp)
        res[0] = '1';
    else
        removeZero(res);
}

void Product(char *s, int k, char *res)
{
    int tmp = 0;
    strcpy(res, s);
    for (int i = strlen(s) - 1; i > 0; i--)
    {
        int t = (s[i] - '0') * k + tmp;
        tmp = t / 10;
        res[i] = t % 10 + '0';
    }
    if (tmp)
        res[0] = tmp + '0';
    else
        removeZero(res);
}
int check(char *s, char a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s, a[i]) == 0)
            return 1;
    }
    return 0;
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
        char a[100][100] = {};

        // mảng số xoay vòng
        strcpy(a[0], s);
        int len = strlen(s);
        for (int i = 1; i < len; i++)
            turn(a[i - 1], a[i]);

        addZero(s);
        int kt = 1;
        for (int i = 1; i <= len; i++)
        {
            if (i < 10)
            {
                char ans[100] = {};
                Product(s, i, ans);
                if (check(ans, a, len) == 0)
                {
                    printf("NO");
                    kt = 0;
                    break;
                }
            }
            else
            {
                // hàng chục
                int k1 = i / 10;
                char ans1[100] = {};
                Product(s, k1, ans1);
                ans1[strlen(ans1)] = '0';
                // hàng đơn vị
                int k2 = i % 10;
                char ans2[100] = {};
                Product(s, k2, ans2);
                // cộng
                char sum[100] = {};
                Sum(ans1, ans2, sum);
                if (sum[0] == '0')
                    removeZero(sum);
                if (check(sum, a, len) == 0)
                {
                    printf("NO");
                    kt = 0;
                    break;
                }
            }
        }
        if (kt)
            printf("YES");
        printf("\n");
    }
    return 0;
}