#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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
    for (int i = 1; i <= n; i++)
    {
        scanf("\n");
        a[i].no = i;
        gets(a[i].name);
        gets(a[i].birth);
        float x, y, z;
        scanf("%f %f %f", &x, &y, &z);
        a[i].diem = x + y + z;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i].diem < a[j].diem)
            {
                struct SinhVien tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            else if (a[i].diem == a[j].diem && a[i].no > a[j].no)
            {
                struct SinhVien tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i].no);
        printf("%s ", a[i].name);
        printf("%s ", a[i].birth);
        printf("%.1f\n", a[i].diem);
    }
    return 0;
}