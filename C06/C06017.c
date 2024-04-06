#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void sort(char ds[][200], int n)
{
    char tmp[200];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(ds[i], ds[j]) > 0)
            {
                strcpy(tmp, ds[i]);
                strcpy(ds[i], ds[j]);
                strcpy(ds[j], tmp);
            }
        }
    }
}
int check(char s[], char ds[][200], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s, ds[i]) == 0)
            return 0;
    }
    return 1;
}
void nhap(char *s, char a[][200], int *n)
{
    gets(s);
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(a[(*n)], token);
        *n += 1;
        token = strtok(NULL, " ");
    }
}
int main()
{
    // input
    char a[200][200];
    char b[200][200];
    char c[200][200];
    char s1[200];
    char s2[200];
    int n1 = 0;
    nhap(s1, a, &n1);
    int n2 = 0;
    nhap(s2, b, &n2);
    int n3 = 0;
    for (int i = 0; i < n1; i++)
    {
        if (check(a[i], b, n2) && check(a[i], a, i))
        {
            strcpy(c[n3], a[i]);
            n3++;
        }
    }
    sort(c, n3);
    for (int i = 0; i < n3; i++)
        printf("%s ", c[i]);
    return 0;
}