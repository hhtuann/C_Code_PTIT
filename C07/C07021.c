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
struct SinhVien
{
    int id;
    char name[100];
    float a, b, c;
    float sum;
};
void add(struct SinhVien sv[], int *n)
{
    int k;
    scanf("%d", &k);
    printf("%d\n", k);
    int m = *n;
    for (int i = m + 1; i <= m + k; i++)
    {
        sv[i].id = i;
        scanf("\n%[^\n]s", sv[i].name);
        scanf("%f %f %f", &sv[i].a, &sv[i].b, &sv[i].c);
        sv[i].sum = sv[i].a + sv[i].b + sv[i].c;
    }
    (*n) += k;
}
void change(struct SinhVien sv[])
{
    int k;
    scanf("%d", &k);
    printf("%d\n", k);
    scanf("\n%[^\n]s", sv[k].name);
    scanf("%f %f %f", &sv[k].a, &sv[k].b, &sv[k].c);
    sv[k].sum = sv[k].a + sv[k].b + sv[k].c;
}
void display(struct SinhVien sv[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (sv[i].sum > sv[j].sum)
            {
                struct SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d %s %.1f %.1f %.1f\n", sv[i].id, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
    }
}
int main()
{
    struct SinhVien a[1000];
    int n = 0;
    int choice;
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add(a, &n);
            break;
        case 2:
            change(a);
            break;
        case 3:
            display(a, n);
            break;
        default:
            break;
        }
    } while (choice != 3);
    return 0;
}