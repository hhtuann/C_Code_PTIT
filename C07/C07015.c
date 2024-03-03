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
    int no;
    char name[1000];
    char birth[1000];
    float diem;
} a[10000];
int main()
{
    // input
    int n;
    scanf("%d", &n);
    float maxx = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("\n");
        a[i].no = i;
        gets(a[i].name);
        gets(a[i].birth);
        float x, y, z;
        scanf("%f %f %f", &x, &y, &z);
        a[i].diem = x + y + z;
        if (a[i].diem > maxx)
            maxx = a[i].diem;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i].diem == maxx)
        {
            printf("%d ", a[i].no);
            printf("%s ", a[i].name);
            printf("%s ", a[i].birth);
            printf("%.1f\n", a[i].diem);
        }
    }
    return 0;
}